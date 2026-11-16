/* f_0x10263440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10263440(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327bf8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        ebp = rd32(sp0 + 8u);
        loc_c = t1;
        t2 = rd32(arg1 - 0x78u);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 + 8u, t2);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 4u, 0u);
        if (rd32(arg1 + 4u) != 0u)
        {
            edx = t4;
            edi = t2;
            goto L_102634a3;
        }
        eax = rd32(arg1 + 4u);
        ecx = t3;
        edx = t4;
        edi = t2;
        wr32(sp0 - 0x20u, arg1 + 4u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t5 = cow_fastcall(g, COW_IMG(0x10260cc0u), ecx, edx, 1, arg1 + 4u);
        t6 = g->ecx;
        t7 = g->edx;
        if ((int32_t)t5 >= 0)
        {
            edx = t7;
            goto L_102634a3;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = t5;
        wr32(sp0 - 0x20u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
        t8 = g->edx;
        eax = ebx;
        edx = t8;
    }
    else
    {
        loc_c = t1;
        eax = 0x80004003u;
        edx = in_edx;
    }
L_102634b9: ;
    wr32(g->fs_base, loc_c);
    g->edx = edx;
    return eax;
L_102634a3: ;
    t9 = rd32(arg1 + 4u);
    wr32(ebp, t9);
    t10 = rd32(arg1 + 4u);
    wr32(sp0 - 0x20u, t10);
    g->eax = t9;
    g->edx = edx;
    t11 = rd32(t10);
    g->esp = sp0 - 0x1cu;
    t12 = cow_thiscall(g, rd32(t11 + 4u), t11, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x20u, edi);
    g->edx = t14;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t13, 1, edi);
    t15 = g->edx;
    eax = 0u;
    edx = t15;
    goto L_102634b9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263440(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
