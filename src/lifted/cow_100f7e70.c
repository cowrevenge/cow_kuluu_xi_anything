/* f_0x100f7e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100f7e70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < -1) goto L_100f7e80;
    if ((int32_t)arg2 <= 7)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        goto L_100f7e82;
    }
L_100f7e80: ;
    eax = in_eax & 0xffffff00u;
L_100f7e82: ;
    if ((int32_t)arg3 < -1) goto L_100f7e91;
    if ((int32_t)arg3 <= 80) goto L_100f7e93;
L_100f7e91: ;
    eax = eax & 0xffffff00u;
L_100f7e93: ;
    if (arg1 == 0xffffffffu) goto L_100f7eaa;
    if (arg1 == 1u)
    {
        ecx = arg1;
        goto L_100f7eaf;
    }
    if (arg1 == 2u)
    {
        ecx = arg1;
        goto L_100f7eaf;
    }
    return eax & 0xffffff00u;
L_100f7eaa: ;
    ecx = 1u;
L_100f7eaf: ;
    if ((uint8_t)eax != 0u)
    {
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, 0xau, ecx, arg2, arg3);
        eax = (t1 & 0xffffff00u) | t1 != 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7e70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
