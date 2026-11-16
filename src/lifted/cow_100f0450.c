/* f_0x100f0450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f0450(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100f0498;
    }
    eax = rd32(COW_IMG(0x104df770u));
    t1 = rd32(eax + 0x1369cu);
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x100e1770u), g->eax, self, in_edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x10114e30u), t3, t4, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    cow_call_regs(g, COW_IMG(0x100f76d0u), t5, g->ecx, g->edx, 1, 1, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100edef0u), t8, 0);
    t10 = g->edx;
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x11cu) < 7)
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x11cu);
        goto L_100f049b;
    }
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x11cu);
    ecx = rd32(COW_IMG(0x104df770u));
    edx = t10;
    if ((int32_t)eax > 8) goto L_100f049b;
    g->esp = sp0;
    t11 = cow_stdcall(g, COW_IMG(0x100f9db0u), 0);
    if ((uint8_t)t11 == 1u)
    {
        eax = t11;
        goto L_100f049b;
    }
    eax = t11;
L_100f0498: ;
    return eax & 0xffffff00u;
L_100f049b: ;
    wr32(COW_IMG(0x104df770u), 0u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f0450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
