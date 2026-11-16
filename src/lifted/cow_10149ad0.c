/* f_0x10149ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10149ad0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10149b82;
    }
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10149070u), rd32(COW_IMG(0x10578408u)), 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        edi = t1;
        goto L_10149b08;
    }
    edx = t2;
    t3 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10149b08: ;
    t6 = ((uint16_t)arg2 != 1u) + 0x264u;
    g->eax = eax;
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, t6);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x82u);
    t11 = g->edx;
    if ((uint32_t)(int16_t)arg2 == 1u)
    {
        eax = t10;
        edx = t11;
        esi = t7;
        goto L_10149b64;
    }
    eax = t10;
    edx = t11;
    esi = t7;
    if ((uint32_t)(int16_t)arg2 != 2u) goto L_10149b82;
    wr32(self + 0x14u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10222770u), rd32(COW_IMG(0x10666ea4u)), 6, COW_IMG(0x10149c70u), edi, esi, eax, 0u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10149b64: ;
    wr32(self + 0x14u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x10222770u), rd32(COW_IMG(0x10666ea4u)), 6, COW_IMG(0x10149b90u), edi, esi, eax, 0u, 0u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_10149b82: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149ad0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
