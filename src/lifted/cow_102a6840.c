/* f_0x102a6840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a6840(Guest* g)
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
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2864u)) == 0u) goto L_102a6920;
    eax = rd32(COW_IMG(0x109a2864u));
    ecx = self;
    edx = in_edx;
    edi = eax;
    loc_8 = eax;
L_102a6860: ;
    if ((int32_t)rd32(edi) <= 0) goto L_102a690e;
    ebx = edi + 4u;
    loc_4 = 0u;
L_102a6875: ;
    if (rd32(ebx) == 0u) goto L_102a68f8;
    g->ebx = ebx;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1028a2b0u), ecx, 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102a68f8;
    }
    eax = t1;
    esi = t1;
    t3 = rd32(rd32(ebx) + 0x18u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = t3;
    t4 = rd32(ebx);
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x1028a2b0u), t4, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_102a68e5;
    }
    ecx = t6;
    edx = t7;
    ebp = t5;
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 2u) <= 2)
    {
        ecx = ~ecx - 2u;
        goto L_102a68ce;
    }
    ecx = ~ecx - 2u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10312980u), 5, ebp, esi, ecx, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_102a68ce;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    if (rd8(esi) != 0x52u) goto L_102a68ce;
    if (rd8(esi + 1u) == 0x54u) goto L_102a692a;
L_102a68ce: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bde10u), 0xb5u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    edi = loc_8;
L_102a68e5: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103bde10u), 0xb8u);
    t17 = g->edx;
    edx = t17;
L_102a68f8: ;
    if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(edi))
    {
        ecx = rd32(edi);
        ebx = ebx + 4u;
        loc_4 = loc_4 + 1u;
        goto L_102a6875;
    }
    ecx = rd32(edi);
L_102a690e: ;
    t18 = rd32(edi + 0x104u);
    if (rd32(edi + 0x104u) != 0u)
    {
        loc_8 = t18;
        goto L_102a685c;
    }
L_102a6920: ;
    g->ebx = in_ebx;
    return 0u;
L_102a685c: ;
    edi = loc_8;
    goto L_102a6860;
L_102a692a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bde10u), 0xaeu);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103bde10u), 0xafu);
    g->ebx = in_ebx;
    return rd32(loc_4 * 4u + loc_8 + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a6840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a6840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
