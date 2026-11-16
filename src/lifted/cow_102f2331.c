/* f_0x102f2331 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f2331(Guest* g)
{
    double d1;
    double d2;
    double d4;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t3;
    uint32_t t6;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), (double)rdf32(self), 1u) >> 8u & 0x41u) != 0u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), (double)rdf32(self), 1u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_102f234d;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), (double)rdf32(self), 1u);
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    x1 = 0.0;
L_102f2348: ;
    wrf32(sp0 - 0x1cu, (float)(double)(float)x1);
L_102f2365: ;
    d1 = (double)rdf32(self + 4u);
    if ((cow_fsw(g, x0, d1, 1u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d1, 1u);
        goto L_102f2376;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d1, 1u);
    x1 = 0.0;
L_102f2371: ;
    wrf32(sp0 - 0x18u, (float)(double)(float)x1);
L_102f2390: ;
    d4 = (double)rdf32(self + 8u);
    if ((cow_fsw(g, x0, d4, 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d4, 0u);
        goto L_102f23a1;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d4, 0u);
    x0 = 0.0;
L_102f239c: ;
    wrf32(sp0 - 0x14u, (float)(double)(float)x0);
L_102f23bb: ;
    wr32(sp0 - 0x20u, in_esi);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), self, 3, in_esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    d7 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)d7);
    wr32(sp0 - 0xcu, (uint32_t)fist32(g, d7));
    d8 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x10346160u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)d8);
    wr32(sp0 - 8u, (uint32_t)fist32(g, d8));
    d9 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)d9);
    wr32(sp0 - 8u, (uint32_t)fist32(g, d9));
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x109b262cu)));
    t10 = (uint32_t)fist32(g, d7);
    t11 = (uint32_t)fist32(g, d8);
    t12 = (uint32_t)fist32(g, d9);
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b262cu));
    g->edx = t12;
    return (t10 << 6u | t11) << 5u | t12;
L_102f234d: ;
    if ((cow_fsw(g, (double)rdf32(self), (double)rdf32(COW_IMG(0x1032961cu)), 1u) >> 8u & 0x41u) != 0u) goto L_102f2360;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(self), (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    x1 = 1.0;
    goto L_102f2348;
L_102f2360: ;
    wr32(sp0 - 0x1cu, rd32(self));
    eax = rd32(self);
    goto L_102f2365;
L_102f2376: ;
    d2 = (double)rdf32(self + 4u);
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 1u) >> 8u & 0x41u) != 0u) goto L_102f238a;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    x1 = 1.0;
    goto L_102f2371;
L_102f238a: ;
    t3 = rd32(self + 4u);
    wr32(sp0 - 0x18u, t3);
    eax = t3;
    goto L_102f2390;
L_102f23a1: ;
    d5 = (double)rdf32(self + 8u);
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u) >> 8u & 0x41u) != 0u) goto L_102f23b5;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    x0 = 1.0;
    goto L_102f239c;
L_102f23b5: ;
    t6 = rd32(self + 8u);
    wr32(sp0 - 0x14u, t6);
    eax = t6;
    goto L_102f23bb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2331(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f2331(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
