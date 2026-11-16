/* f_0x102d2a73 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=11 */
uint32_t cow_fn_102d2a73(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_b0;
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
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 204u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xb0u;
    t1 = cow_thiscall(g, COW_IMG(0x102dd5dau), sp0 - 0x14u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x102e1005u), sp0 - 8u, 0);
    t3 = g->edx;
    if (arg1 != 0u)
    {
        edx = t3;
        goto L_102d2a9f;
    }
    edx = t3;
L_102d2a95: ;
    esi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_b0 = in_esi;
L_102d2b2c: ;
    g->esp = sp0 - 0xb0u;
    t9 = cow_fastcall(g, COW_IMG(0x102e1439u), sp0 - 8u, edx, 0);
    t10 = g->edx;
    cow_fastcall(g, COW_IMG(0x102dd5e4u), sp0 - 0x14u, t10, 0);
    g->esi = rd32(sp0 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_102d2a9f: ;
    if (arg4 == 0u) goto L_102d2a95;
    if (arg9 == 0u) goto L_102d2a95;
    if (rd32(sp0 + 0x28u) == 0xffffffffu)
    {
        wr32(sp0 + 0x28u, 0x80004u);
    }
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xbcu, arg3);
    wr32(sp0 - 0xc0u, arg2);
    wr32(sp0 - 0xc4u, arg1);
    wr32(sp0 - 0xc8u, sp0 - 0xacu);
    g->esp = sp0 - 0xb0u;
    t4 = cow_fastcall(g, COW_IMG(0x102e143eu), sp0 - 8u, edx, 6, sp0 - 0xacu, arg1, arg2, arg3, 0u, 0u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
        goto L_102d2ada;
    }
    eax = t4;
    edx = t5;
L_102d2ad6: ;
    esi = eax;
    goto L_102d2b2c;
L_102d2ada: ;
    wr32(sp0 - 0xb4u, in_edi);
    wr32(sp0 - 0x5cu, arg5);
    wr32(sp0 - 0x58u, arg6);
    wr32(sp0 - 0xb8u, 6u);
    wr32(sp0 - 0x60u, arg4);
    wr32(sp0 - 0x54u, arg7);
    wr32(sp0 - 0xb8u, 6u);
    esi = arg9;
    edi = sp0 - 0x50u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t6 = rd32(sp0 + 0x28u);
    wr32(sp0 - 0xb8u, t6);
    esi = arg9;
    edi = sp0 - 0x38u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, arg11);
    wr32(sp0 - 0x18u, arg8);
    wr32(sp0 - 0xbcu, sp0 - 0x60u);
    wr32(sp0 - 0xc0u, sp0 - 0xacu);
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t7 = cow_thiscall(g, COW_IMG(0x102e0e72u), sp0 - 0x14u, 3, sp0 - 0xacu, sp0 - 0x60u, t6);
    t8 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        edx = t8;
        goto L_102d2ad6;
    }
    edx = t8;
    esi = 0u;
    goto L_102d2b2c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2a73(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d2a73(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
