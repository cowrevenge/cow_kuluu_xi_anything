/* f_0x101e95d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e95d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x14u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 0u);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        edx = t2;
        loc_18 = t1;
        wr32(sp0 - 0x2cu, in_ebp);
        wr32(sp0 - 0x30u, in_edi);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        t3 = rd32(self + 8u);
        wr16(sp0 - 0x10u, 0u);
        wr16(sp0 - 0xeu, 0u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, t3, g->edx, 0, 1, sp0 - 0x10u);
        t4 = rd32(sp0 - 0x10u);
        t5 = rd32(sp0 - 0xeu);
        wr8(sp0 - 0x20u, 0u);
        wr8(sp0 - 0x1fu, 0u);
        wr8(sp0 - 0x1eu, 0u);
        wr32(sp0 - 0x1cu, self + 0x18u);
        ecx = t4;
        edx = t5;
        ebx = 0u;
        ebp = t5 + 0x14u;
        edi = t4 + 8u;
        cf = self + 0x18u < self;
        pf = PARITY((uint8_t)(self + 0x18u));
        zf = self + 0x18u == 0u;
        sf = (int32_t)(self + 0x18u) < 0;
        of = ((self ^ self + 0x18u) & (self + 0x18u ^ 0x18u)) >> 0x1fu;
        loc_1c = self + 0x18u;
L_101e9636: ;
        if ((int32_t)((uint32_t)((int32_t)(uint32_t)(int8_t)rd8(rd32(sp0 - 0x18u)) >> ((ebx & 0x1fu) < 0x20u ? ebx & 0x1fu : 0x1fu)) & 3u) < 1)
        {
            eax = rd32(sp0 - 0x18u);
            ecx = (ecx & 0xffffff00u) | (uint8_t)ebx;
        }
        else
        {
            esi = (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(rd32(sp0 - 0x18u)) >> ((ebx & 0x1fu) < 0x20u ? ebx & 0x1fu : 0x1fu)) & 3u;
            wr32(sp0 - 0x34u, esi);
            wr32(sp0 - 0x38u, COW_IMG(0x10381f70u));
            wr32(sp0 - 0x3cu, sp0 - 8u);
            g->eax = esi;
            g->ecx = sp0 - 8u;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10381f70u), esi, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t7 = g->ecx;
            t8 = g->edx;
            if (rd8(esi + sp0 - 0x21u) == 0u)
            {
                ecx = t7;
                edx = t8;
                esi = esi - 1u;
                goto L_101e9670;
            }
            eax = (t6 & 0xffffff00u) | rd8(esi + sp0 - 0x21u);
            ecx = t7;
            edx = t8;
            esi = esi - 1u;
L_101e9667: ;
            if (rd8(esi + sp0 - 0x1fu) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x1fu);
                esi = esi + 1u;
                goto L_101e9667;
            }
            esi = esi + 1u;
L_101e9670: ;
            wr32(sp0 - 0x34u, 0x80808080u);
            wr8(esi + sp0 - 0x20u, (uint8_t)(rd8(esi + sp0 - 0x20u) + 1u));
            wr32(sp0 - 0x38u, sp0 - 8u);
            t9 = ebp + esi * 0x10u;
            wr32(sp0 - 0x3cu, t9);
            wr32(sp0 - 0x40u, edi);
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi, t9, sp0 - 8u, 0x80808080u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0x80808080u);
            t10 = esi * 0x10u + (uint32_t)(int16_t)ebp;
            wr32(sp0 - 0x40u, t10);
            t11 = (uint32_t)(int16_t)edi + 0x10u;
            wr32(sp0 - 0x44u, t11);
            g->eax = rd32(sp0 - 0x1cu);
            t12 = rd32(sp0 - 0x1cu);
            t13 = rd32(rd32(sp0 - 0x1cu));
            g->esp = sp0 - 0x30u;
            t14 = cow_thiscall(g, COW_IMG(0x1011fb60u), t13, 5, t11, t10, 0x80808080u, 0u, 0u);
            t15 = g->ecx;
            eax = t14;
            ecx = t15;
        }
        wr32(sp0 - 0x1cu, loc_1c + 4u);
        if ((int32_t)(ebx + 2u) < 6)
        {
            edx = loc_1c + 4u;
            cf = ebx + 2u < 6u;
            pf = PARITY((uint8_t)(ebx - 4u));
            zf = ebx == 4u;
            sf = (int32_t)(ebx - 4u) < 0;
            of = ((ebx + 2u ^ 6u) & (ebx + 2u ^ ebx - 4u)) >> 0x1fu;
            ebx = ebx + 2u;
            loc_1c = loc_1c + 4u;
            goto L_101e9636;
        }
        edx = loc_1c + 4u;
        if (rd8(rd32(sp0 - 0x18u) + 1u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x18u) + 1u);
            ebp = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
        }
        else
        {
            ebp = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 0x80808080u);
            t16 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 0x24u;
            wr32(sp0 - 0x38u, t16);
            t17 = (uint32_t)(int16_t)rd16(sp0 - 0x10u) + 0x55u;
            wr32(sp0 - 0x3cu, t17);
            g->eax = t17;
            g->edx = t16;
            g->esp = sp0 - 0x28u;
            t18 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(sp0 - 0x14u) + 0x14u), 5, t17, t16, 0x80808080u, 0u, 0u);
            t19 = g->edx;
            eax = t18;
            edx = t19;
        }
    }
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e95d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e95d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
