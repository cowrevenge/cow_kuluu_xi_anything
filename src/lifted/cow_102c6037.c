/* f_0x102c6037 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c6037(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 4u);
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, ebx, COW_IMG(0x103c9374u), in_edi, in_esi);
        t1 = g->edx;
        ecx = COW_IMG(0x103c9374u);
        edx = t1;
    }
    if ((rd32(ebx + 0x68u) & 4u) != 0u)
    {
        eax = rd32(ebx + 0x68u);
        t2 = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
        wr32(ebx + 0x68u, t2);
    }
    g->eax = arg3 + 1u;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, ebx, arg3 + 1u, in_edi, in_esi, in_ebx, in_ebp);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        edi = t3;
        goto L_102c607e;
    }
    eax = t3;
    edx = t4;
    ecx = arg3 + 1u;
    loc_14 = COW_IMG(0x103c9350u);
L_102c6129: ;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, loc_14);
    loc_18 = ebx;
L_102c612f: ;
L_102c6131: ;
    return;
L_102c607e: ;
    g->eax = eax;
    g->ecx = arg3 + 1u;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, ebx, edi, arg3, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t7, 1, 5, ebx, 0u, ebx, edi, arg3);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_102c60a1;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, edi);
    loc_14 = edi;
    loc_18 = ebx;
    goto L_102c612f;
L_102c60a1: ;
    wr32(sp0 + 4u, edi);
    wr8(arg3 + edi, 0u);
    if (rd8(edi) == 0u)
    {
        eax = arg3 + edi;
        goto L_102c60ba;
    }
    eax = arg3 + edi;
L_102c60af: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    if (rd8(rd32(sp0 + 4u)) != 0u) goto L_102c60af;
    ecx = rd32(sp0 + 4u);
L_102c60ba: ;
    if (rd32(sp0 + 4u) != eax)
    {
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    }
    g->eax = eax;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, ebx, 0x10u, in_edi, in_esi, in_ebx, in_ebp);
    t12 = g->edx;
    if (t11 != 0u)
    {
        edx = t12;
        esi = t11;
        goto L_102c60e9;
    }
    eax = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, COW_IMG(0x103c9324u));
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t15, 1, 2, ebx, edi);
    goto L_102c6131;
L_102c60e9: ;
    t16 = rd32(sp0 + 4u);
    wr32(esi, 0xffffffffu);
    wr32(esi + 4u, edi);
    wr32(esi + 8u, t16);
    g->ecx = 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x10317480u), t16, g->ecx, g->edx, 1, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(esi + 0xcu, t17);
    g->esp = sp0 - 0x14u;
    t20 = cow_call_regs(g, COW_IMG(0x102c86b9u), g->eax, t18, t19, 1, 4, ebx, arg2, esi, 1u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 + 4u, t20);
    g->ecx = t21;
    g->esp = sp0 - 0x24u;
    t23 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t22, 1, 2, ebx, edi);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->esp = sp0 - 0x2cu;
    t26 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t25, 1, 2, ebx, esi);
    t27 = g->ecx;
    t28 = g->edx;
    if (rd32(sp0 + 4u) == 0u) goto L_102c6131;
    eax = t26;
    ecx = t27;
    edx = t28;
    loc_14 = COW_IMG(0x103c92f8u);
    goto L_102c6129;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c6037(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c6037(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
