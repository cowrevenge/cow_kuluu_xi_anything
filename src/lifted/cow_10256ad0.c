/* f_0x10256ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10256ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) != 0u)
    {
        ebp = rd32(sp0 + 4u);
        wr8(ebp, rd8(arg2));
        if (rd32(arg2 + 4u) != 0u)
        {
            eax = rd32(arg2 + 4u);
            q1 = (int64_t)cow_muls(0x92492493u, rd32(arg2 + 8u) - eax);
            t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(arg2 + 8u) - eax) >> 4u);
            ecx = t2 >> 0x1fu;
            edx = t2 + (t2 >> 0x1fu);
        }
        else
        {
            ecx = self;
            edx = 0u;
        }
        if ((int32_t)edx >= 0)
        {
            eax = edx;
        }
        else
        {
            eax = 0u;
        }
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 0x1cu, 1, 3, eax * 0x1cu, in_edi, in_ebx);
        t4 = g->edx;
        wr32(ebp + 4u, t3);
        t5 = rd32(arg2 + 8u);
        t6 = rd32(arg2 + 4u);
        t7 = rd32(arg2 + 8u);
        wr32(sp0 + 4u, t5);
        if (t6 == t7)
        {
            edx = t4;
            edi = t3;
            goto L_10256b7c;
        }
        eax = t3;
        ecx = t5;
        edx = t4;
        ebx = t6;
        edi = t3;
L_10256b3c: ;
        if (edi != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t8 = cow_call_regs(g, COW_IMG(0x10256c40u), eax, edi, g->edx, 0, 1, ebx);
            t9 = g->ecx;
            t10 = g->edx;
            t11 = rd16(ebx + 0x10u);
            wr16(edi + 0x10u, (uint16_t)t11);
            wr16(edi + 0x12u, rd16(ebx + 0x12u));
            t12 = rd16(ebx + 0x14u);
            wr16(edi + 0x14u, (uint16_t)t12);
            t13 = rd16(ebx + 0x16u);
            wr16(edi + 0x16u, (uint16_t)t13);
            t14 = rd32(ebx + 0x18u);
            wr32(edi + 0x18u, t14);
            eax = ((t8 | t11) & 0xffff0000u) | t13;
            ecx = rd32(sp0 + 4u);
            edx = (t10 & 0xffff0000u) | t12;
        }
        if (ebx + 0x1cu != ecx)
        {
            ebx = ebx + 0x1cu;
            edi = edi + 0x1cu;
            goto L_10256b3c;
        }
        edi = edi + 0x1cu;
L_10256b7c: ;
        wr32(ebp + 8u, edi);
        wr32(ebp + 0xcu, edi);
        t15 = rd8(arg2 + 0x10u);
        wr8(ebp + 0x10u, (uint8_t)t15);
        if (rd32(arg2 + 0x14u) != 0u)
        {
            ecx = rd32(arg2 + 0x14u);
            edx = (edx & 0xffffff00u) | t15;
            eax = (uint32_t)((int32_t)(rd32(arg2 + 0x18u) - ecx) >> 2u);
        }
        else
        {
            ecx = rd32(arg2 + 0x14u);
            edx = (edx & 0xffffff00u) | t15;
            eax = 0u;
        }
        if ((int32_t)eax < 0)
        {
            eax = 0u;
        }
        g->eax = eax << 2u;
        g->esp = sp0 - 8u;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax << 2u, in_edi, in_ebx);
        wr32(ebp + 0x14u, t16);
        if (rd32(arg2 + 0x14u) == rd32(arg2 + 0x18u))
        {
            eax = t16;
            ecx = rd32(arg2 + 0x14u);
            goto L_10256bcc;
        }
        eax = t16;
        ecx = rd32(arg2 + 0x14u);
        edx = rd32(arg2 + 0x18u);
L_10256bba: ;
        if (eax != 0u)
        {
            wr32(eax, rd32(ecx));
        }
        if (ecx + 4u != edx)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            goto L_10256bba;
        }
        eax = eax + 4u;
        ecx = ecx + 4u;
L_10256bcc: ;
        wr32(ebp + 0x18u, eax);
        wr32(ebp + 0x1cu, eax);
        wr8(ebp + 0x20u, rd8(arg2 + 0x20u));
        if (rd32(arg2 + 0x24u) != 0u)
        {
            ecx = rd32(arg2 + 0x24u);
            eax = (uint32_t)((int32_t)(rd32(arg2 + 0x28u) - ecx) >> 3u);
        }
        else
        {
            ecx = rd32(arg2 + 0x24u);
            eax = 0u;
        }
        if ((int32_t)eax < 0)
        {
            eax = 0u;
        }
        g->eax = eax;
        g->esp = sp0;
        t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 8u, 1, 3, eax * 8u, in_esi, in_ebp);
        wr32(ebp + 0x24u, t17);
        if (rd32(arg2 + 0x24u) == rd32(arg2 + 0x28u))
        {
            eax = t17;
            goto L_10256c28;
        }
        eax = t17;
        ecx = rd32(arg2 + 0x28u);
        esi = rd32(arg2 + 0x24u);
L_10256c10: ;
        if (eax != 0u)
        {
            wr32(eax, rd32(esi));
            t18 = rd32(esi + 4u);
            wr32(eax + 4u, t18);
        }
        if (esi + 8u != ecx)
        {
            eax = eax + 8u;
            esi = esi + 8u;
            goto L_10256c10;
        }
        eax = eax + 8u;
L_10256c28: ;
        wr32(ebp + 0x28u, eax);
        wr32(ebp + 0x2cu, eax);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10256ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
