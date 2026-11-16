/* f_0x1011e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1011e6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0x32u);
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, self, in_edx, 1, 1, self + 0x32u);
    t2 = g->edx;
    wr32(sp0 - 0x24u, self + 0x32u);
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, t2, 1, self + 0x32u);
    t3 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
    wr32(self + 0x4cu, t4);
    if (t4 != 0u)
    {
        eax = t4;
        goto L_1011e710;
    }
    eax = t4;
    return eax & 0xffffff00u;
L_1011e710: ;
    t5 = (uint32_t)(int16_t)rd16(self + 0xcu);
    wr32(sp0 - 0x14u, t5);
    if (rd8(self + 0x1cu) & 1u)
    {
        ecx = rd16(eax + 0x24u);
        edx = rd16(eax + 0x26u);
        eax = (eax & 0xffffff00u) | rd8(self + 0x1cu);
        edi = t5;
        loc_14 = t5;
        wr32(sp0 - 0x10u, ecx);
        wr32(sp0 - 0xcu, 0u);
        t7 = edi + (uint32_t)(int16_t)rd16(self + 8u);
        wr32(sp0 - 0x10u, t7);
        wrf32(self + 0x9cu, (float)fr(g, (double)(int32_t)t7 / (double)(int64_t)cow_i64(ecx, 0u)));
        wrf32(self + 0x64u, (float)fr(g, (double)(int32_t)t7 / (double)(int64_t)cow_i64(ecx, 0u)));
        x0 = fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(ecx, 0u));
    }
    else
    {
        ecx = rd16(eax + 0x24u);
        edx = rd16(eax + 0x26u);
        eax = (eax & 0xffffff00u) | rd8(self + 0x1cu);
        edi = t5;
        loc_14 = t5;
        wr32(sp0 - 0x10u, ecx);
        wr32(sp0 - 0xcu, 0u);
        t6 = edi + (uint32_t)(int16_t)rd16(self + 8u);
        wr32(sp0 - 0x14u, t6);
        wrf32(self + 0x9cu, (float)fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(ecx, 0u)));
        wrf32(self + 0x64u, (float)fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(ecx, 0u)));
        x0 = fr(g, (double)(int32_t)t6 / (double)(int64_t)cow_i64(ecx, 0u));
    }
    wrf32(self + 0xb8u, (float)x0);
    wrf32(self + 0x80u, (float)x0);
    t8 = (uint32_t)(int16_t)rd16(self + 0xeu);
    wr32(sp0 - 0x14u, t8);
    if ((eax & 2u) != 0u)
    {
        eax = t8;
        loc_14 = t8;
        wr32(sp0 - 0x10u, edx);
        wr32(sp0 - 0xcu, 0u);
        t10 = eax + (uint32_t)(int16_t)rd16(self + 0xau);
        wr32(sp0 - 0x10u, t10);
        wrf32(self + 0x84u, (float)fr(g, (double)(int32_t)t10 / (double)(int64_t)cow_i64(edx, 0u)));
        wrf32(self + 0x68u, (float)fr(g, (double)(int32_t)t10 / (double)(int64_t)cow_i64(edx, 0u)));
        x0 = fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(edx, 0u));
    }
    else
    {
        eax = t8;
        loc_14 = t8;
        wr32(sp0 - 0x10u, edx);
        wr32(sp0 - 0xcu, 0u);
        t9 = eax + (uint32_t)(int16_t)rd16(self + 0xau);
        wr32(sp0 - 0x10u, t9);
        wrf32(self + 0x84u, (float)fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(edx, 0u)));
        wrf32(self + 0x68u, (float)fr(g, (double)(int32_t)loc_14 / (double)(int64_t)cow_i64(edx, 0u)));
        x0 = fr(g, (double)(int32_t)t9 / (double)(int64_t)cow_i64(edx, 0u));
    }
    wrf32(self + 0xbcu, (float)x0);
    wrf32(self + 0xa0u, (float)x0);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011e6d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
