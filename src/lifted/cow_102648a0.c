/* f_0x102648a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_102648a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327cb8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x5cu;
    t2 = cow_fastcall(g, COW_IMG(0x1026a190u), sp0 - 0x54u, in_edx, 2, arg1, 0u);
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10264980u), self, 1, sp0 - 0x54u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0) goto L_1026490c;
    eax = t4;
    edx = t5;
    edi = t4;
    wr32(sp0 - 4u, 0xffffffffu);
    g->esp = sp0 - 0x5cu;
    cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x54u, edx, 0);
    t6 = g->edx;
    t7 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t7);
    g->edx = t6;
    return edi;
L_1026490c: ;
    wr32(sp0 - 0x60u, arg7);
    wr32(sp0 - 0x64u, arg6);
    wr32(sp0 - 0x68u, arg5);
    wr32(sp0 - 0x6cu, arg4);
    wr32(sp0 - 0x70u, arg3);
    wr32(sp0 - 0x74u, arg2);
    g->eax = arg3;
    g->edx = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 0x5cu;
    t9 = cow_thiscall(g, rd32(t8 + 0x58u), self, 6, arg2, arg3, arg4, arg5, arg6, arg7);
    t10 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x54u, t10, 0);
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t11;
        goto L_1026495d;
    }
    edx = t11;
    esi = t9;
    t12 = rd32(sp0 - 0xcu);
    t13 = rd32(sp0 - 0x58u);
    t14 = rd32(sp0 - 0x5cu);
    wr32(g->fs_base, t12);
    g->esi = t13;
    g->edi = t14;
    g->edx = edx;
    return esi;
L_1026495d: ;
    t15 = rd32(sp0 - 0xcu);
    t16 = rd32(sp0 - 0x58u);
    t17 = rd32(sp0 - 0x5cu);
    wr32(g->fs_base, t15);
    g->esi = t16;
    g->edi = t17;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102648a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102648a0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
