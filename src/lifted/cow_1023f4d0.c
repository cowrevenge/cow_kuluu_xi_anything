/* f_0x1023f4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1023f4d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 8u));
    t2 = rd32(sp0 + 8u);
    t3 = rd16(rd32(sp0 + 8u) + 2u);
    wr32(sp0 + 8u, t1);
    eax = t2;
    ecx = t1;
    edx = in_edx;
    ebp = (uint32_t)(int16_t)t3;
    esi = arg1;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
L_1023f4ea: ;
    wr32(sp0 - 0x20u, 0xau);
    wr32(sp0 - 0x24u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, esi, 0xau, loc_1c);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t6;
        ebx = t4;
        ecx = ebx - esi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = t4;
        edi = esi;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        ecx = ~ecx - 1u;
    }
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, COW_IMG(0x1018d330u), sp0 - 0xcu, 2, esi, ecx);
    t8 = g->edx;
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, 0u);
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 2, 0u, 0x80808080u);
    t10 = g->ecx;
    wr32(sp0 - 0x28u, t9);
    wr32(sp0 - 0x2cu, ebp);
    t11 = rd32(sp0 + 8u);
    wr32(sp0 - 0x30u, t11);
    g->edx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t11, ebp, t9, 0u, 0x80808080u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t13 = g->edx;
    if (ebx == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_1023f54a;
    }
    eax = t12;
    edx = t13;
    ebp = ebp + 0x10u;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t14 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    esi = ebx + 1u;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1023f4ea;
L_1023f54a: ;
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023f4d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
