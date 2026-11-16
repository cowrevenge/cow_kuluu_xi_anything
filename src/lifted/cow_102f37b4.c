/* f_0x102f37b4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f37b4(Guest* g)
{
    double d10;
    double d4;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, 0x10u);
    t1 = rd32(sp0 + 4u);
    wr32(t1, 0u);
    wr32(t1 + 4u, 0u);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = 0u;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, in_edi, in_esi, in_ebx);
    t2 = g->edx;
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 8u, arg2 + 0xcu);
    ebx = t1;
    loc_8 = arg2 + 0xcu;
L_102f37e2: ;
    t3 = rd32(sp0 + 4u);
    d4 = (double)(float)fr(g, (double)rdf32(sp0 + t3 * 4u - 0x54u) + (double)rdf32(loc_8));
    wrf32(sp0 - 0xcu, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + t3 * 4u - 0x54u) + (double)rdf32(loc_8)) * (double)rdf32(COW_IMG(0x1033678cu))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x10u, (float)d5);
    wr32(sp0 - 0x14u, (uint32_t)fist32(g, d5));
    wr32(sp0 - 0x10u, (uint32_t)fist32(g, d5));
    t6 = rd32(ebx + (t3 >> 3u) * 4u) >> 4u | (uint32_t)fist32(g, d5) << 0x1cu;
    wr32(ebx + (t3 >> 3u) * 4u, t6);
    if ((int32_t)(uint32_t)fist32(g, d5) >= 0)
    {
        ecx = t3 << 2u;
        loc_c_f = d4;
        x0 = (double)(int32_t)(uint32_t)fist32(g, d5);
    }
    else
    {
        ecx = t3 << 2u;
        loc_c_f = d4;
        x0 = (double)(int32_t)(uint32_t)fist32(g, d5);
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    if ((rd32(sp0 + 4u) & 3u) == 3u)
    {
        edx = rd32(sp0 + 4u) & 3u;
        x0 = fr(g, loc_c_f - fr(g, x0 * (double)rdf32(COW_IMG(0x1033976cu))));
    }
    else
    {
        edx = rd32(sp0 + 4u) & 3u;
        x0 = fr(g, loc_c_f - fr(g, x0 * (double)rdf32(COW_IMG(0x1033976cu))));
        d7 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348408u)) * x0) + (double)rdf32(ecx + sp0 - 0x50u));
        wrf32(ecx + sp0 - 0x50u, (float)d7);
    }
    if (rd32(sp0 + 4u) >= 0xcu) goto L_102f3895;
    if (edx != 0u)
    {
        d8 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348404u)) * x0) + (double)rdf32(ecx + sp0 - 0x48u));
        wrf32(ecx + sp0 - 0x48u, (float)d8);
    }
    d9 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348400u)) * x0) + (double)rdf32(ecx + sp0 - 0x44u));
    wrf32(ecx + sp0 - 0x44u, (float)d9);
    if (edx == 3u) goto L_102f3895;
    d10 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + sp0 - 0x40u));
    wrf32(ecx + sp0 - 0x40u, (float)d10);
    ecx = ecx + sp0 - 0x40u;
L_102f3897: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    wr32(sp0 - 8u, loc_8 + 0x10u);
    if (rd32(sp0 + 4u) < 0x10u)
    {
        loc_8 = loc_8 + 0x10u;
        goto L_102f37e2;
    }
    wr32(sp0 + 4u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 4u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, ebx + 8u);
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x102f2c9bu), arg2, g->ecx, g->edx, 1, 2, ebx + 8u, 0u);
    return;
L_102f3895: ;
    goto L_102f3897;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f37b4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f37b4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
