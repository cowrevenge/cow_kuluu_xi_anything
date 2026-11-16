/* f_0x10313014 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10313014(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a1a8u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (rd32(COW_IMG(0x109f8408u)) != 3u)
    {
        eax = rd32(COW_IMG(0x109f8408u));
        loc_14 = t1;
        goto L_10313084;
    }
    eax = rd32(COW_IMG(0x109f8408u));
    loc_14 = t1;
    if (rd32(sp0 + 4u) > rd32(COW_IMG(0x109f8400u)))
    {
        ecx = self;
        edx = in_edx;
        goto L_103130e3;
    }
    esi = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t2 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
    t3 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x30u, esi);
    g->esi = esi;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x1031bb89u), 3, esi, in_edi, in_esi);
    t5 = g->edx;
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 8u, 0xffffffffu);
    t6 = rd32(sp0 - 0x30u);
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x1031307bu), t6, t5, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(sp0 - 0x20u) == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_103130e3;
    }
L_10313101: ;
    t16 = rd32(sp0 - 0x14u);
    wr32(g->fs_base, t16);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_10313084: ;
    if (eax != 2u)
    {
        ecx = self;
        edx = in_edx;
        goto L_103130e3;
    }
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, 0x10u);
        esi = 0x10u;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        esi = eax + 0xfu & 0xfffffff0u;
    }
    wr32(sp0 + 4u, esi);
    if (esi > rd32(COW_IMG(0x103d29dcu)))
    {
        ecx = self;
        edx = in_edx;
        goto L_103130d4;
    }
    wr32(sp0 - 0x30u, 9u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
    t9 = g->edx;
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0x30u, esi >> 4u);
    g->eax = esi >> 4u;
    g->edx = t9;
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1031ca4eu), 9u, 1, esi >> 4u);
    t11 = g->edx;
    wr32(sp0 - 0x20u, t10);
    wr32(sp0 - 8u, 0xffffffffu);
    t12 = rd32(sp0 - 0x30u);
    cow_fastcall(g, COW_IMG(0x103130dau), t12, t11, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (rd32(sp0 - 0x20u) != 0u) goto L_10313101;
    eax = rd32(sp0 - 0x20u);
    ecx = t13;
    edx = t14;
L_103130d4: ;
    wr32(sp0 - 0x30u, esi);
    loc_30 = esi;
L_103130f3: ;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x109f8404u)));
    g->esp = sp0 - 0x2cu;
    cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 0u, loc_30);   /* kernel32.dll!HeapAlloc */
    goto L_10313101;
L_103130e3: ;
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        wr32(sp0 - 0x30u, 1u);
        eax = 1u;
    }
    t15 = (eax + 0xfu & 0xffffff00u) | (eax + 0xfu & 0xf0u);
    wr32(sp0 - 0x30u, t15);
    eax = t15;
    loc_30 = t15;
    goto L_103130f3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313014(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10313014(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
