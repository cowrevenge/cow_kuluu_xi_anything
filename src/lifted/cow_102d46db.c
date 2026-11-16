/* f_0x102d46db - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_102d46db(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t1 = cow_thiscall(g, COW_IMG(0x102daff3u), sp0 - 0x70u, 0);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102d474e;
    }
    eax = t1;
    edx = t2;
    if (arg4 == 0u) goto L_102d474e;
    if (arg5 == 0u) goto L_102d474e;
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, arg9);
    wr32(sp0 - 0x84u, arg5);
    wr32(sp0 - 0x88u, arg4);
    g->esp = sp0 - 0x78u;
    t3 = cow_fastcall(g, COW_IMG(0x102dd405u), sp0 - 0x70u, edx, 4, arg4, arg5, arg9, 1u);
    t4 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edx = t4;
        goto L_102d4718;
    }
    eax = t3;
    edx = t4;
L_102d4714: ;
    esi = eax;
L_102d4753: ;
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x102db00cu), sp0 - 0x70u, 0);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_102d4718: ;
    wr32(sp0 - 0x7cu, 6u);
    if (arg6 == 0u) goto L_102d4763;
    esi = arg6;
    edi = sp0 - 0x1cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(sp0 - 0x14u) > rd32(sp0 - 0x64u))
    {
        eax = rd32(sp0 - 0x14u);
        goto L_102d474e;
    }
    eax = rd32(sp0 - 0x14u);
    if (rd32(sp0 - 0x1cu) > eax) goto L_102d474e;
    if (rd32(sp0 - 0x10u) > rd32(sp0 - 0x60u))
    {
        eax = rd32(sp0 - 0x10u);
        goto L_102d474e;
    }
    eax = rd32(sp0 - 0x10u);
    if (rd32(sp0 - 0x18u) > eax) goto L_102d474e;
    if (rd32(sp0 - 8u) > rd32(sp0 - 0x5cu))
    {
        eax = rd32(sp0 - 8u);
        goto L_102d474e;
    }
    eax = rd32(sp0 - 8u);
    if (rd32(sp0 - 0xcu) <= eax) goto L_102d4768;
L_102d474e: ;
    esi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_74 = in_esi;
    loc_78 = in_edi;
    goto L_102d4753;
L_102d4763: ;
    esi = sp0 - 0x58u;
    edi = sp0 - 0x1cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
L_102d4768: ;
    wr32(sp0 - 0x7cu, arg8);
    wr32(sp0 - 0x80u, arg7);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    t5 = rd32(sp0 - 0x68u);
    wr32(sp0 - 0x88u, t5);
    t6 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, t6);
    t7 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x90u, t7);
    t8 = rd32(sp0 - 0x70u);
    wr32(sp0 - 0x94u, t8);
    t9 = rd32(sp0 - 0x6cu);
    wr32(sp0 - 0x98u, t9);
    wr32(sp0 - 0x9cu, arg3);
    wr32(sp0 - 0xa0u, arg2);
    wr32(sp0 - 0xa4u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t10 = cow_stdcall(g, COW_IMG(0x102d2a73u), 11, arg1, arg2, arg3, t9, t8, t7, t6, t5, sp0 - 0x1cu, arg7, arg8);
    t11 = g->edx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        edx = t11;
        goto L_102d4714;
    }
    eax = t10;
    edx = t11;
    esi = 0u;
    goto L_102d4753;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d46db(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d46db(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
