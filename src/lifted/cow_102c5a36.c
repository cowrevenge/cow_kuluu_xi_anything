/* f_0x102c5a36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5a36(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_210;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 548u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5a86;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x210u, COW_IMG(0x103c8ff4u));
    wr32(sp0 - 0x214u, arg1);
    g->esp = sp0 - 0x204u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8ff4u), in_edi, in_esi);
    ecx = COW_IMG(0x103c8ff4u);
L_102c5a58: ;
    t1 = arg3 - (uint32_t)((int32_t)arg3 >> 0x1fu);
    if ((uint32_t)((int32_t)t1 >> 1u) == rd16(arg1 + 0x118u))
    {
        eax = rd16(arg1 + 0x118u);
        edi = (uint32_t)((int32_t)t1 >> 1u);
        goto L_102c5ab0;
    }
    eax = rd16(arg1 + 0x118u);
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fd8u));
    edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
    loc_210 = COW_IMG(0x103c8fd8u);
L_102c5a72: ;
    wr32(sp0 - 0x214u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20cu;
    t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_210);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x218u, arg3);
    wr32(sp0 - 0x21cu, arg1);
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t4, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x210u), in_edi);
L_102c5afe: ;
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5a86: ;
    if ((eax & 4u) == 0u) goto L_102c5a91;
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fc0u));
    ecx = self;
    edx = in_edx;
    loc_210 = COW_IMG(0x103c8fc0u);
    goto L_102c5a72;
L_102c5a91: ;
    if ((eax & 2u) != 0u) goto L_102c5a9c;
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fa4u));
    ecx = self;
    edx = in_edx;
    loc_210 = COW_IMG(0x103c8fa4u);
    goto L_102c5a72;
L_102c5a9c: ;
    if (arg2 == 0u)
    {
        ecx = self;
        goto L_102c5a58;
    }
    if ((rd8(arg2 + 8u) & 0x40u) == 0u)
    {
        ecx = self;
        goto L_102c5a58;
    }
    wr32(sp0 - 0x210u, COW_IMG(0x103c8f8cu));
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_210 = COW_IMG(0x103c8f8cu);
    goto L_102c5a72;
L_102c5ab0: ;
    wr32(sp0 - 0x210u, in_ebx);
    if ((int32_t)edi <= 0)
    {
        edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
        goto L_102c5adc;
    }
    edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
    ebx = 0u;
L_102c5ab7: ;
    wr32(sp0 - 0x214u, 2u);
    wr32(sp0 - 0x218u, sp0 + 0xeu);
    wr32(sp0 - 0x21cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 0xeu, 2u, in_ebx, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x220u, sp0 + 0xeu);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x21cu;
    t7 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 + 0xeu, g->ecx, g->edx, 1, 1, sp0 + 0xeu);
    t8 = g->ecx;
    t9 = g->edx;
    wr16(ebx * 2u + sp0 - 0x204u, (uint16_t)t7);
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        ecx = t8;
        edx = t9;
        ebx = ebx + 1u;
        goto L_102c5ab7;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
L_102c5adc: ;
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t10 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, in_ebx, in_edi, in_esi);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        wr32(sp0 - 0x214u, arg2);
        wr32(sp0 - 0x218u, arg1);
        g->esp = sp0 - 0x204u;
        cow_call_regs(g, COW_IMG(0x102c801du), g->eax, 0u, edx, 1, 5, arg1, arg2, sp0 - 0x204u, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    }
    goto L_102c5afe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5a36(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c5a36(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
