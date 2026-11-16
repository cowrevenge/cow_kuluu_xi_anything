/* f_0x102e4099 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4099(Guest* g)
{
    unsigned cf;
    double d10;
    double d11;
    double d12;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1048u) != 0u)
    {
        t1 = rd32(sp0 + 0xcu);
        g->eax = in_eax;
        g->esp = sp0 - 0x3cu;
        t2 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t1);
        wr32(sp0 + 0xcu, t2);
    }
    t3 = (arg1 & 3u) * 0x20u + (arg2 & 3u) * 4u + rd32(self + 0x2cu);
    g->edx = arg2 & 3u;
    t4 = rd32(self + 0x18u);
    t5 = rd32(self + 0x1050u);
    t6 = rd32(self + 0x1054u);
    g->esp = sp0 - 0x30u;
    cow_thiscall_cdecl(g, COW_IMG(0x102e2005u), rd32(self + 0x2cu), 3, in_edi, in_esi, in_ebx);
    t7 = g->edx;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = t7;
    }
    else
    {
        esi = t4 + t5 * arg1 + t6 * arg2;
        loc_14 = t3;
        ecx = 0u;
        loc_c = 0u;
L_102e4105: ;
        d8 = (double)(float)(double)rdf32(loc_14 + (loc_c & 3u) * 4u);
        d9 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu)) * (double)rdf32(COW_IMG(0x10329e90u))) + (double)rdf32(loc_14 + (loc_c & 3u) * 4u));
        d10 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 4u) * (double)rdf32(COW_IMG(0x10329e90u))) + d8);
        d11 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10329e90u))) + d8);
        d12 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(COW_IMG(0x10329e90u))) + d8);
        t13 = (uint32_t)fist32(g, d12);
        t14 = (uint32_t)fist32(g, d9);
        t15 = (uint32_t)fist32(g, d10);
        t16 = (uint32_t)fist32(g, d11);
        eax = t13;
        edx = (uint32_t)((int32_t)t13 >> 0x1fu);
        cf = 0u;
        pf = PARITY(loc_c & 3u);
        zf = (loc_c & 3u) == 0u;
        sf = (int32_t)(loc_c & 3u) < 0;
        of = 0u;
        { /* shld edx, eax, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = edx, b = eax, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
        eax = edx | (uint32_t)((int32_t)t14 >> 0x1fu);
        ebx = eax << 0x10u | t14;
        cf = 0u;
        pf = PARITY((uint8_t)(edx | (uint32_t)((int32_t)t14 >> 0x1fu)));
        zf = (edx | (uint32_t)((int32_t)t14 >> 0x1fu)) == 0u;
        sf = (int32_t)(edx | (uint32_t)((int32_t)t14 >> 0x1fu)) < 0;
        of = 0u;
        { /* shld eax, ebx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = ebx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        ebx = ebx << 0x10u | t15;
        edi = eax | (uint32_t)((int32_t)t15 >> 0x1fu);
        cf = 0u;
        pf = PARITY((uint8_t)(eax | (uint32_t)((int32_t)t15 >> 0x1fu)));
        zf = (eax | (uint32_t)((int32_t)t15 >> 0x1fu)) == 0u;
        sf = (int32_t)(eax | (uint32_t)((int32_t)t15 >> 0x1fu)) < 0;
        of = 0u;
        { /* shld edi, ebx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = edi, b = ebx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edi = (uint32_t)(r); } } }
        t17 = ebx << 0x10u | t16;
        wr32(esi, t17);
        t18 = edi | (uint32_t)((int32_t)t16 >> 0x1fu);
        wr32(esi + 4u, t18);
        if (loc_c + 1u < rd32(self + 0x1058u))
        {
            ecx = ecx + 0x10u;
            esi = esi + 8u;
            loc_c = loc_c + 1u;
            goto L_102e4105;
        }
        edx = loc_c + 1u;
    }
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a4cu));
    g->edx = edx;
    return rd32(COW_IMG(0x109b1a4cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4099(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4099(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
