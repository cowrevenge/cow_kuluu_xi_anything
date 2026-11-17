/* f_0x1011c080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1011c080(Guest* g)
{
    double d16;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(sp0 + 0x18u);
    t2 = (uint32_t)((int32_t)t1 >> 6u) & 3u;
    wr32(sp0 - 0x1cu, t2);
    t3 = (uint32_t)((int32_t)t1 >> 2u) & 3u;
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x24u, t1 & 3u);
    wr32(sp0 - 0x28u, 1u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x1011c1f0u), g->eax, g->ecx, t1 & 3u, 1, 1, 1u);
    wr32(COW_IMG(0x104e1b88u), arg1);
    wr32(sp0 + 0x18u, arg3);
    wr32(COW_IMG(0x104e1b8cu), arg2);
    g->eax = arg3;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x1011bdc0u), g->eax, g->ecx, arg2, 1, 0);
    t5 = g->edx;
    cow_fastcall(g, COW_IMG(0x1011bae0u), self, t5, 0);
    t6 = g->edx;
    edx = t6;
    ebx = 0u;
    edi = t1;
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_1011c0db: ;
    if (arg4 == 0u) goto L_1011c0eb;
    if ((int32_t)ebx >= (int32_t)arg4) goto L_1011c1a5;
L_1011c0eb: ;
    if (rd8(arg3 + ebx) == 0u) goto L_1011c1a5;
    eax = arg3 + ebx;
    if (rd8(rd32(sp0 + 0x18u)) == 0u) goto L_1011c1a5;
    ecx = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t8 = g->ecx;
    wr32(sp0 - 0x20u, sp0 + 0x18u);
    g->edx = sp0 + 0x18u;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 0x18u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t10 = g->edx;
    if ((uint16_t)t9 != 0x87u)
    {
        ebx = ebx + t7;
        esi = t9;
    }
    else
    {
        edx = t10;
        ebx = ebx + t7;
        esi = t9;
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            goto L_1011c13f;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        if (eax == 2u) goto L_1011c15b;
        if (eax == 3u) goto L_1011c15b;
L_1011c13f: ;
        if (eax == 2u)
        {
            if ((int32_t)rd32(COW_IMG(0x104e1b88u)) >= 8)
            {
                ecx = rd32(COW_IMG(0x104e1b88u));
                wr32(COW_IMG(0x104e1b88u), ecx - 8u);
            }
        }
    }
L_1011c15b: ;
    wr32(sp0 - 0x1cu, arg8);
    wr32(sp0 - 0x20u, arg7);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, esi);
    g->ebx = ebx;
    g->ecx = arg7;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x1011bf40u), g->eax, g->ecx, arg5, 1, 5, esi, arg5, edi, arg7, arg8);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    wr32(sp0 - 0x34u, esi);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    t13 = cow_call_regs(g, COW_IMG(0x1011d840u), sp0 - 8u, g->ecx, g->edx, 1, 2, esi, sp0 - 8u);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    d16 = fr(g, fr(g, (double)(int32_t)0u * (double)rdf32(sp0 + 0x1cu)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d16);
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    wr32(COW_IMG(0x104e1b88u), t17 + rd32(COW_IMG(0x104e1b88u)));
    edx = t18;
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    goto L_1011c0db;
L_1011c1a5: ;
    wr32(sp0 - 0x1cu, 5u);
    wr32(self + 0x64u, 0x80808080u);
    wr32(self + 0x48u, 0x80808080u);
    wr32(self + 0x2cu, 0x80808080u);
    wr32(self + 0x10u, 0x80808080u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t19);
    g->edx = rd32(t19);
    t20 = rd32(t19);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t20 + 0xfcu), rd32(COW_IMG(0x1045666cu)), 4, t19, 0u, 4u, 5u);
    t21 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x1bu);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x24u, t22);
    g->eax = t22;
    g->edx = t21;
    t23 = cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x1bu, 0u);
    t24 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t24;
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011c080(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
