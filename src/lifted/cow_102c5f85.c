/* f_0x102c5f85 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5f85(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(arg1 + 0x68u) & 1u) goto L_102c5fce;
    wr32(sp0 - 0x20u, COW_IMG(0x103c92e0u));
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c92e0u), in_edi, in_esi);
    t1 = g->edx;
    ecx = COW_IMG(0x103c92e0u);
    edx = t1;
L_102c5fa6: ;
    if ((rd32(arg1 + 0x68u) & 4u) == 0u)
    {
        eax = rd32(arg1 + 0x68u);
    }
    else
    {
        eax = rd32(arg1 + 0x68u);
        t2 = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
        wr32(arg1 + 0x68u, t2);
        eax = t2;
    }
    if (arg3 == 7u) goto L_102c5fdf;
    wr32(sp0 - 0x20u, COW_IMG(0x103c92c4u));
    loc_20 = COW_IMG(0x103c92c4u);
L_102c5fbd: ;
    wr32(sp0 - 0x24u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_20);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x20u), in_edi);
L_102c6030: ;
L_102c6033: ;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5fce: ;
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5fa6;
    }
    if ((rd8(arg2 + 9u) & 2u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5fa6;
    }
    wr32(sp0 - 0x20u, COW_IMG(0x103c92acu));
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    loc_20 = COW_IMG(0x103c92acu);
    goto L_102c5fbd;
L_102c5fdf: ;
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0xcu, 7u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg1);
    g->ecx = t7;
    g->esp = sp0 - 0x1cu;
    t9 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t8, 1, 5, arg1, 0u, arg1, sp0 - 0xcu, 7u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u) goto L_102c6033;
    eax = t9;
    ecx = t10;
    edx = t11;
    t12 = rd8(sp0 - 6u);
    wr8(sp0 - 0xeu, (uint8_t)t12);
    t13 = rd8(sp0 - 7u);
    wr8(sp0 - 0xfu, (uint8_t)t13);
    t14 = rd8(sp0 - 8u);
    wr8(sp0 - 0x10u, (uint8_t)t14);
    t15 = rd8(sp0 - 9u);
    wr8(sp0 - 0x11u, (uint8_t)t15);
    wr8(sp0 - 0x12u, rd8(sp0 - 0xau));
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    t17 = g->ecx;
    t18 = g->edx;
    wr16(sp0 - 0x14u, (uint16_t)t16);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102c886du), 3, arg1, arg2, sp0 - 0x14u);
    goto L_102c6030;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5f85(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c5f85(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
