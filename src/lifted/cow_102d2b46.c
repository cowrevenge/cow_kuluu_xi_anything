/* f_0x102d2b46 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102d2b46(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_b8;
    uint32_t loc_bc;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032810fu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102d2b50u));
    wr32(sp0 - 0xb8u, in_ebx);
    wr32(sp0 - 0xbcu, in_esi);
    g->eax = COW_IMG(0x102d2b50u);
    g->edx = in_edx;
    g->esp = sp0 - 0xbcu;
    t2 = cow_thiscall(g, COW_IMG(0x102daff3u), sp0 - 0x68u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x102e1005u), sp0 - 0x14u, 0);
    t5 = g->edx;
    wr8(sp0 - 8u, 1u);
    if (arg1 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_102d2b7d;
    }
    eax = t4;
    edx = t5;
L_102d2b76: ;
    esi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_b8 = in_ebx;
    loc_bc = in_esi;
L_102d2bcf: ;
    wr8(sp0 - 8u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0xbcu;
    t12 = cow_fastcall(g, COW_IMG(0x102e1439u), sp0 - 0x14u, edx, 0);
    t13 = g->edx;
    wr32(sp0 - 8u, 0xffffffffu);
    g->ebx = 0u;
    g->ebp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x102db00cu), sp0 - 0x68u, t13, 0);
    t14 = rd32(sp0 - 0x10u);
    t15 = rd32(sp0 - 0xb8u);
    t16 = rd32(sp0 - 0xbcu);
    wr32(g->fs_base, t14);
    g->ebx = t15;
    g->esi = t16;
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_102d2b7d: ;
    if (arg3 == 0u) goto L_102d2b76;
    wr32(sp0 - 0xc0u, 1u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, arg5);
    wr32(sp0 - 0xccu, arg4);
    wr32(sp0 - 0xd0u, arg3);
    wr32(sp0 - 0xd4u, sp0 - 0xb4u);
    g->eax = sp0 - 0xb4u;
    g->esp = sp0 - 0xbcu;
    t6 = cow_fastcall(g, COW_IMG(0x102e143eu), sp0 - 0x14u, edx, 6, sp0 - 0xb4u, arg3, arg4, arg5, 0u, 1u);
    t7 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t7;
        goto L_102d2ba5;
    }
    eax = t6;
    edx = t7;
L_102d2ba1: ;
    esi = eax;
    goto L_102d2bcf;
L_102d2ba5: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb4u);
    g->eax = sp0 - 0xb4u;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t8 = cow_thiscall(g, COW_IMG(0x102db081u), sp0 - 0x68u, 1, sp0 - 0xb4u);
    t9 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = t8;
        edx = t9;
        goto L_102d2ba1;
    }
    eax = t8;
    edx = t9;
    wr32(sp0 - 0xc0u, arg6);
    wr32(sp0 - 0xc4u, arg2);
    wr32(sp0 - 0xc8u, arg1);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t10 = cow_stdcall(g, COW_IMG(0x102dd10cu), 3, arg1, arg2, arg6);
    t11 = g->edx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        edx = t11;
        goto L_102d2ba1;
    }
    eax = t10;
    edx = t11;
    esi = 0u;
    goto L_102d2bcf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2b46(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d2b46(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
