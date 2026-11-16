/* f_0x1023ea30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023ea30(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 356u);

    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    wr32(sp0 - 0x118u, sp0 - 0x108u);
    t3 = rd32(self + 8u);
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    g->edx = t2;
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, t3, g->edx, 0, 1, sp0 - 0x108u);
    t5 = g->edx;
    if (rd32(self + 0x4cu) == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        ebp = t1;
        wr32(sp0 - 0x118u, in_ebx);
        ebx = self + 0x30u;
        esi = 0u;
L_1023ea7c: ;
        if (rd16(ebx) != 0u)
        {
            eax = rd16(ebx);
            if (eax > 8u)
            {
                eax = 8u;
            }
            wr32(sp0 - 0x11cu, 0u);
            wr32(sp0 - 0x120u, 0u);
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0x80808080u);
            wr32(sp0 - 0x12cu, 0x3f800000u);
            wr32(sp0 - 0x130u, 0x3f800000u);
            t6 = (uint32_t)(int16_t)rd16(sp0 - 0x106u) + 0x23u;
            wr32(sp0 - 0x134u, t6);
            t7 = esi + (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 0x2bu;
            wr32(sp0 - 0x138u, t7);
            g->esp = sp0 - 0x118u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(eax * 4u + rd32(ebp) + 0x154u), 8, t7, t6, 0x3f800000u, 0x3f800000u, 0x80808080u, 1u, 0u, 0u);
        }
        if ((int32_t)(esi + 0x22u) < 272)
        {
            ebx = ebx + 2u;
            esi = esi + 0x22u;
            goto L_1023ea7c;
        }
        ebx = ebx + 2u;
        cf = esi + 0x22u < 0x110u;
        pf = PARITY((uint8_t)(esi - 0xeeu));
        zf = esi == 0xeeu;
        sf = (int32_t)(esi - 0xeeu) < 0;
        of = ((esi + 0x22u ^ 0x110u) & (esi + 0x22u ^ esi - 0xeeu)) >> 0x1fu;
        t8 = rd32(self + 0x18u);
        t9 = rd32(self + 0x1cu);
        eax = t8;
        ecx = t9;
        { /* shrd eax, ecx, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = eax, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        t10 = ecx >> 1u & 0xfffu;
        wr32(sp0 - 0x11cu, t10);
        wr32(sp0 - 0x120u, eax);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        g->esp = sp0 - 0x118u;
        cow_cdecl(g, COW_IMG(0x10310981u), 3, sp0 - 0x100u, eax, t10);
        wr32(sp0 - 0x128u, 0x80808080u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        t11 = rd32(sp0 - 0x106u) + 5u;
        wr32(sp0 - 0x130u, t11);
        t12 = rd32(sp0 - 0x108u) + 0x54u;
        wr32(sp0 - 0x134u, t12);
        g->edx = t12;
        g->esp = sp0 - 0x110u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t12, t11, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), in_ebx, in_edi);
        t13 = g->edx;
        t14 = rd32(self + 0x48u) + 1u;
        wr32(sp0 - 0x138u, t14);
        wr32(sp0 - 0x13cu, COW_IMG(0x103884acu));
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        g->ebx = ebx;
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103884acu), t14, rd32(sp0 - 0x134u), rd32(sp0 - 0x130u));
        wr32(sp0 - 0x144u, 0x80808080u);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        t15 = rd32(sp0 - 0x106u) + 5u;
        wr32(sp0 - 0x14cu, t15);
        t16 = rd32(sp0 - 0x108u) + 0x112u;
        wr32(sp0 - 0x150u, t16);
        g->ecx = t16;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t16, t15, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x103884acu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u));
        t17 = g->ecx;
        wr32(sp0 - 0x154u, 0x80808080u);
        wr32(sp0 - 0x158u, self + 0x20u);
        t18 = rd32(sp0 - 0x106u) + 0x13u;
        wr32(sp0 - 0x15cu, t18);
        t19 = rd32(sp0 - 0x108u) + 0x54u;
        wr32(sp0 - 0x160u, t19);
        g->eax = t19;
        g->edx = t18;
        g->esp = sp0 - 0x13cu;
        t20 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t19, t18, self + 0x20u, 0x80808080u, rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), sp0 - 0x100u, 0x80808080u, sp0 - 0x100u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ea30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023ea30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
