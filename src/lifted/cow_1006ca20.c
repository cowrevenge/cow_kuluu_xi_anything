/* f_0x1006ca20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006ca20(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;

    d1 = (double)rdf32(sp0 + 4u);
    t2 = cow_cdecl(g, COW_IMG(0x1031454au), 2, cow_dlo(d1), cow_dhi(d1));
    if ((int32_t)t2 > 16)
    {
        eax = t2;
        goto L_1006ca47;
    }
    eax = t2;
    zf = t2 == 0x10u;
    if (zf) goto L_1006ca44;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1006ca44;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1006ca44;
    }
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_1006ca55;
    }
    eax = eax - 2u;
L_1006ca44: ;
    return eax & 0xffffff00u;
L_1006ca47: ;
    if (eax == 0x80u) goto L_1006ca44;
    if (eax == 0x200u) goto L_1006ca44;
L_1006ca55: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ca20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006ca20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
