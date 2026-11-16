/* f_0x10249af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10249af0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 0x14u, 0xffffffffu);
    wr32(arg1 + 0x10u, 0xffffffffu);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x18u, 0u);
    if (arg3 != 0u) goto L_10249bb3;
    if (rd8(arg2) != 0x52u) goto L_10249b7c;
    if (rd8(arg2 + 1u) != 0x49u) goto L_10249b7c;
    if (rd8(arg2 + 2u) != 0x46u) goto L_10249b7c;
    if (rd8(arg2 + 3u) != 0x46u) goto L_10249b7c;
    if (rd8(arg2 + 8u) != 0x57u) goto L_10249b7c;
    if (rd8(arg2 + 9u) != 0x41u) goto L_10249b7c;
    if (rd8(arg2 + 0xau) != 0x56u) goto L_10249b7c;
    if (rd8(arg2 + 0xbu) != 0x45u) goto L_10249b7c;
    wr32(arg1, 0u);
    t1 = (((rd8(arg2 + 7u) << 8u | rd8(arg2 + 6u)) << 8u | rd8(arg2 + 5u)) << 8u | rd8(arg2 + 4u)) + 8u;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10248c00u), 3, arg1, arg2, t1);
    return rd32(arg1 + 0x1cu);
L_10249b7c: ;
    wr32(arg1, 1u);
    t2 = (((rd8(arg2 + 4u) << 8u | rd8(arg2 + 5u)) << 8u | rd8(arg2 + 6u)) << 8u | rd8(arg2 + 7u)) + 8u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10249150u), g->eax, t2, rd8(arg2 + 7u), 1, 3, arg1, arg2, t2);
    return rd32(arg1 + 0x1cu);
L_10249bb3: ;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
    t4 = g->edx;
    if (t3 == 0u) goto L_10249c6c;
    edx = t4;
    edi = t3;
    wr32(edi, 0u);
    wr32(edi + 4u, 0u);
    wr32(edi + 8u, 0u);
    g->eax = 0u;
    g->ecx = edi;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f2d0u), in_ebp, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        ebx = t5;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, edi, 1u, 0xcu, ebx, in_ebp, in_edi);
        t8 = g->ecx;
        t9 = g->edx;
        g->edi = edi;
        g->ecx = t8;
        g->esp = sp0 - 0x18u;
        t10 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t9, 1, 3, ebx, edi, 1u);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    if (rd8(edi) != 0x52u) goto L_10249c52;
    if (rd8(edi + 1u) != 0x49u) goto L_10249c52;
    if (rd8(edi + 2u) != 0x46u)
    {
        ecx = (ecx & 0xffffff00u) | 0x46u;
        goto L_10249c52;
    }
    ecx = (ecx & 0xffffff00u) | 0x46u;
    if (rd8(edi + 3u) != (uint8_t)ecx) goto L_10249c52;
    if (rd8(edi + 8u) != 0x57u) goto L_10249c52;
    if (rd8(edi + 9u) != 0x41u) goto L_10249c52;
    if (rd8(edi + 0xau) != 0x56u) goto L_10249c52;
    if (rd8(edi + 0xbu) != 0x45u) goto L_10249c52;
    wr32(arg1, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10248e50u), 2, arg1, arg2);
    t14 = g->ecx;
    t15 = g->edx;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t14, t15, 1, 1, edi);
    g->edi = in_edi;
    return rd32(arg1 + 0x1cu);
L_10249c52: ;
    wr32(arg1, 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x102495f0u), 2, arg1, arg2);
    t17 = g->ecx;
    t18 = g->edx;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t17, t18, 1, 1, edi);
L_10249c6c: ;
    g->edi = in_edi;
    return rd32(arg1 + 0x1cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10249af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10249af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
