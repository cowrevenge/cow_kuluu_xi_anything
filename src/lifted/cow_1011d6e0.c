/* f_0x1011d6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1011d6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(arg3) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x20u, in_ebx);
        wr32(sp0 - 0x24u, in_ebp);
        wr32(sp0 - 0x28u, in_esi);
        t1 = rd16(sp0 + 4u);
        wr32(sp0 + 4u, arg5 + 0x10u);
        ecx = self;
        edx = in_edx;
        ebx = (uint32_t)(int16_t)t1;
        ebp = arg2;
        edi = arg3;
L_1011d708: ;
        wr32(sp0 - 0x2cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x1011d350u), ecx, 3, edi, in_esi, in_ebp);
        t3 = g->edx;
        wr32(sp0 - 0x30u, arg4);
        wr32(sp0 - 0x34u, edi);
        g->esp = sp0 - 0x2cu;
        t4 = cow_call_regs(g, COW_IMG(0x1011d440u), g->eax, g->ecx, t3, 1, 2, edi, arg4);
        t5 = g->edx;
        if ((int32_t)t4 >= (int32_t)t2)
        {
            edx = t5;
            esi = t2;
        }
        else
        {
            eax = t4;
            if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                edx = rd32(COW_IMG(0x10456a28u));
                goto L_1011d73b;
            }
            ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = rd32(COW_IMG(0x10456a28u));
            if (ecx == 2u) goto L_1011d73f;
            if (ecx == 3u) goto L_1011d73f;
L_1011d73b: ;
            if (ecx == 0u) goto L_1011d75f;
L_1011d73f: ;
            if ((int32_t)(eax - 1u) < 0) goto L_1011d75f;
            ecx = eax - 1u;
L_1011d746: ;
            if (rd8(ecx + edi) == 0x20u)
            {
                edx = (edx & 0xffffff00u) | rd8(ecx + edi);
                goto L_1011d758;
            }
            edx = (edx & 0xffffff00u) | rd8(ecx + edi);
            if ((uint8_t)edx == 0x2du) goto L_1011d758;
            if ((int32_t)(ecx - 1u) >= 0)
            {
                ecx = ecx - 1u;
                goto L_1011d746;
            }
L_1011d75f: ;
            esi = eax;
        }
L_1011d761: ;
        if (rd8(edi + esi - 1u) != 0xau)
        {
            wr32(sp0 - 0x2cu, esi);
            wr32(sp0 - 0x30u, edi);
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1018d330u), sp0 - 0xcu, 2, edi, esi);
            t12 = g->edx;
            wr32(sp0 - 0x2cu, 0x80808080u);
            wr32(sp0 - 0x30u, 0u);
            g->edx = t12;
            g->esp = sp0 - 0x30u;
            t13 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
            t14 = g->edx;
            wr32(sp0 - 0x34u, t13);
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
            wr32(sp0 - 0x3cu, ebx);
            g->edx = t14;
            g->esp = sp0 - 0x10u;
            t15 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, ebx, (uint32_t)(int16_t)ebp, t13, 0u, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t16 = g->edx;
            eax = t15;
            ecx = sp0 - 0xcu;
            edx = t16;
        }
        else
        {
            wr32(sp0 - 0x2cu, esi - 1u);
            wr32(sp0 - 0x30u, edi);
            g->edx = esi - 1u;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1018d330u), sp0 - 0x18u, 2, edi, esi - 1u);
            t6 = g->edx;
            wr32(sp0 - 0x2cu, 0x80808080u);
            wr32(sp0 - 0x30u, 0u);
            g->edx = t6;
            g->esp = sp0 - 0x30u;
            t7 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x18u, 0);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x34u, t7);
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
            wr32(sp0 - 0x3cu, ebx);
            g->eax = (uint32_t)(int16_t)ebp;
            g->edx = t9;
            g->esp = sp0 - 0x10u;
            t10 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, ebx, (uint32_t)(int16_t)ebp, t7, 0u, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t11 = g->edx;
            eax = t10;
            ecx = sp0 - 0x18u;
            edx = t11;
        }
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t17 = cow_fastcall(g, COW_IMG(0x1018d250u), ecx, edx, 0);
        t18 = g->edx;
        if (rd8(edi + esi) != 0u)
        {
            ecx = rd32(sp0 + 4u);
            edx = t18;
            ebp = ebp + rd32(sp0 + 4u);
            edi = edi + esi;
            goto L_1011d708;
        }
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->ebp = ebp;
    return;
L_1011d758: ;
    if ((int32_t)ecx >= 0)
    {
        esi = ecx + 1u;
        goto L_1011d761;
    }
    goto L_1011d75f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011d6e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
