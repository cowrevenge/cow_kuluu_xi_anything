/* f_0x102d447d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_102d447d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
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
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_thiscall(g, COW_IMG(0x102daff3u), sp0 - 0x68u, 0);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102d44ec;
    }
    eax = t1;
    edx = t2;
    if (arg4 == 0u) goto L_102d44ec;
    if (arg5 == 0u) goto L_102d44ec;
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, arg9);
    wr32(sp0 - 0x80u, arg5);
    wr32(sp0 - 0x84u, arg4);
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t3 = cow_thiscall(g, COW_IMG(0x102dd405u), sp0 - 0x68u, 4, arg4, arg5, arg9, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_102d44ba;
    }
    eax = t3;
    edx = t5;
L_102d44b6: ;
    esi = eax;
L_102d44f1: ;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, COW_IMG(0x102db00cu), sp0 - 0x68u, 0);
    t12 = g->edx;
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t12;
    return esi;
L_102d44ba: ;
    if (arg6 == 0u) goto L_102d4502;
    esi = arg6;
    edi = sp0 - 0x14u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    if ((int32_t)rd32(sp0 - 0x14u) < 0) goto L_102d44ec;
    if ((int32_t)rd32(sp0 - 0xcu) > (int32_t)rd32(sp0 - 0x5cu))
    {
        eax = rd32(sp0 - 0xcu);
        goto L_102d44ec;
    }
    eax = rd32(sp0 - 0xcu);
    if ((int32_t)rd32(sp0 - 0x14u) > (int32_t)eax) goto L_102d44ec;
    if ((int32_t)rd32(sp0 - 0x10u) < 0) goto L_102d44ec;
    if ((int32_t)rd32(sp0 - 8u) > (int32_t)rd32(sp0 - 0x58u))
    {
        eax = rd32(sp0 - 8u);
        goto L_102d44ec;
    }
    eax = rd32(sp0 - 8u);
    if ((int32_t)rd32(sp0 - 0x10u) <= (int32_t)eax) goto L_102d4509;
L_102d44ec: ;
    esi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_6c = in_ebx;
    loc_70 = in_esi;
    loc_74 = in_edi;
    goto L_102d44f1;
L_102d4502: ;
    esi = sp0 - 0x50u;
    edi = sp0 - 0x14u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
L_102d4509: ;
    wr32(sp0 - 0x78u, arg8);
    wr32(sp0 - 0x7cu, arg7);
    wr32(sp0 - 0x80u, sp0 - 0x14u);
    t6 = rd32(sp0 - 0x60u);
    wr32(sp0 - 0x84u, t6);
    t7 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x88u, t7);
    t8 = rd32(sp0 - 0x68u);
    wr32(sp0 - 0x8cu, t8);
    t9 = rd32(sp0 - 0x64u);
    wr32(sp0 - 0x90u, t9);
    wr32(sp0 - 0x94u, arg3);
    wr32(sp0 - 0x98u, arg2);
    wr32(sp0 - 0x9cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t10 = cow_stdcall(g, COW_IMG(0x102d2888u), 10, arg1, arg2, arg3, t9, t8, t7, t6, sp0 - 0x14u, arg7, arg8);
    t11 = g->edx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        edx = t11;
        goto L_102d44b6;
    }
    eax = t10;
    edx = t11;
    esi = 0u;
    goto L_102d44f1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d447d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d447d(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
