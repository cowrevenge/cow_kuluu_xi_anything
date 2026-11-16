/* f_0x10073ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10073ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_10073bd5;
    if (rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u) == 0u) goto L_10073bc8;
    ecx = rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u);
L_10073bba: ;
    if (rd32(rd32(ecx) + 0x20u) == arg3) goto L_10073c18;
    eax = rd32(ecx);
    if (rd32(eax + 0x2cu) != 0u)
    {
        ecx = rd32(eax + 0x2cu);
        goto L_10073bba;
    }
L_10073bc8: ;
    wr32(arg1, 0u);
    return;
L_10073bd5: ;
    if (rd32(COW_IMG(0x1047cf80u) + arg2 * 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf80u) + arg2 * 4u);
        eax = rd32(eax);
    }
    if (eax == 0u) goto L_10073bc8;
L_10073bee: ;
    if (arg3 == 0u) goto L_10073c21;
    if (rd32(eax + 0x20u) == arg3) goto L_10073c15;
    if (rd32(eax + 0x10u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 0x10u);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_10073bee;
    wr32(arg1, 0u);
    return;
L_10073c15: ;
    ecx = rd32(eax + 0x14u);
L_10073c18: ;
    wr32(arg1, ecx);
    return;
L_10073c21: ;
    t1 = rd32(eax + 0x14u);
    wr32(arg1, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10073ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
