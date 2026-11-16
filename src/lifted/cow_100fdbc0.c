/* f_0x100fdbc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100fdbc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x103624d8u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x103624d8u));
        goto L_100fdbd9;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x103624d8u));
    ecx = COW_IMG(0x103624d8u);
L_100fdbce: ;
    if ((uint8_t)eax == 0x3au)
    {
        ecx = ecx + 1u;
        goto L_100fdbdc;
    }
    ecx = ecx + 1u;
    if (rd8(ecx) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        goto L_100fdbce;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
L_100fdbd9: ;
    return eax & 0xffffff00u;
L_100fdbdc: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, ecx);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdbc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fdbc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
