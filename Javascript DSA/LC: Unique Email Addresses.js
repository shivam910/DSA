/**
 * @param {string[]} emails
 * @return {number}
 */
 
 //Using Regx
 
var numUniqueEmails = ( emails ) => {
    const mail =  new Set();
    for ( const c of emails )
    {
        let [ local, domain ] = c.split('@') ;
        local = local.replace(/\+(.*)$/, '')
                     .replace(/\./g, '');
        const key = `${local}@${domain}`;
        if(!mail.has(key)) 
            {
                mail.add(key);
            }
    }
    return mail.size;
};
