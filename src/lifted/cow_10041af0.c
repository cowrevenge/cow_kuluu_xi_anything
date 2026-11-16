/* f_0x10041af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10041af0(Guest* g)
{
    double d11;
    double d15;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        eax = rd32(eax);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b700u), eax + 0x30u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        esi = t1;
        wr32(sp0 - 0x4cu, sp0 - 0x1cu);
        wr32(sp0 - 0x40u, 0x3f800000u);
        g->eax = sp0 - 0x1cu;
        g->esp = sp0 - 0x48u;
        t3 = cow_thiscall(g, COW_IMG(0x10044c40u), self, 1, sp0 - 0x1cu);
        wr32(sp0 - 0x34u, rd32(t3));
        t4 = rd32(t3 + 4u);
        wr32(sp0 - 0x30u, t4);
        t5 = rd32(t3 + 8u);
        wr32(sp0 - 0x2cu, t5);
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 - 0x34u);
        g->edx = sp0 - 0x40u;
        t6 = cow_thiscall(g, COW_IMG(0x100830c0u), esi, 4, sp0 - 0x34u, sp0 - 0x10u, sp0 - 0x40u, sp0 - 0x38u);
        t7 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            edx = t7;
            t8 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0x48u;
            t9 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t8 + 0xdc8u), 0);
            t10 = rd32(t9 + 8u);
            wr32(sp0 - 0x3cu, t10);
            d11 = (double)(float)fr(g, fr(g, (double)(int32_t)t10 * cow_bits2f(0x3f800000u)) * (double)rdf32(COW_IMG(0x1032ade0u)));
            wrf32(sp0 - 0x28u, (float)d11);
            t12 = rd32(COW_IMG(0x1047bfa8u));
            t13 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t12 + 0xdc8u), 0);
            t14 = rd32(t13 + 0xcu);
            wr32(sp0 - 0x3cu, t14);
            d15 = (double)(float)fr(g, fr(g, (double)(int32_t)t14 * cow_bits2f(0x3f800000u)) * (double)rdf32(COW_IMG(0x1032ade0u)));
            wrf32(sp0 - 0x24u, (float)d15);
            if ((rd32(COW_IMG(0x1047bc0cu)) & 0xffffffu) != 0x808080u)
            {
                ecx = rd32(COW_IMG(0x1047bc0cu));
                esi = rd32(COW_IMG(0x1047bc0cu));
            }
            else
            {
                ecx = rd32(COW_IMG(0x1047bc0cu));
                esi = rd32(COW_IMG(0x1047bc0cu));
                esi = (esi & 0xff000000u) | rd32(self + 0x194u);
            }
            wr32(sp0 - 0x4cu, ecx);
            wr32(sp0 - 0x50u, 0x3cu);
            t16 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x54u, t16);
            g->edx = rd32(t16);
            t17 = rd32(t16);
            g->esp = sp0 - 0x48u;
            cow_thiscall(g, rd32(t17 + 0xc8u), ecx, 3, t16, 0x3cu, ecx);
            t18 = g->edx;
            wr32(sp0 - 0x4cu, 0x3dcccccdu);
            wr32(sp0 - 0x50u, sp0 - 0x28u);
            wr32(sp0 - 0x54u, esi);
            wr32(sp0 - 0x58u, self + 0x198u);
            wr32(sp0 - 0x5cu, sp0 - 0x34u);
            g->eax = sp0 - 0x28u;
            g->edx = t18;
            g->esp = sp0 - 0x4cu;
            t19 = cow_cdecl(g, COW_IMG(0x10041c20u), 4, sp0 - 0x34u, self + 0x198u, esi, sp0 - 0x28u);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
    }
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10041af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10041af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
