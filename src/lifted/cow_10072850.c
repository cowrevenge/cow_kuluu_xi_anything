/* f_0x10072850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10072850(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(COW_IMG(0x1047d134u), (uint8_t)arg7);
    if (arg2 == 0u) goto L_100728b2;
    eax = arg2;
L_1007286f: ;
    if (arg3 != 0u) goto L_1007288a;
    if ((rd32(eax + 0x20u) & arg5) != arg4) goto L_100728a1;
L_1007287c: ;
    t2 = rd32(eax + 0x14u);
    wr32(arg1, t2);
    return;
L_1007288a: ;
    if ((rd32(eax + 0x24u) & 0x7fu) != arg3) goto L_100728a1;
    if (arg4 == 0u) goto L_1007287c;
    if ((rd32(eax + 0x20u) & arg5) == arg4) goto L_100728c1;
L_100728a1: ;
    if (rd32(eax + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_1007286f;
L_100728b2: ;
    wr32(arg1, 0u);
    return;
L_100728c1: ;
    t1 = rd32(eax + 0x14u);
    wr32(arg1, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10072850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
