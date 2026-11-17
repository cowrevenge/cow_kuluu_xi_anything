/* f_0x10267cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10267cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327ef8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, self + 0x1cu);
    wr32(sp0 - 0x10u, self + 0x1cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x1cu);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x48u) != 1u) goto L_10267d27;
    eax = rd32(self + 0x48u);
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x1cu, self + 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x1cu);   /* kernel32.dll!LeaveCriticalSection */
    t4 = g->edx;
    t5 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t5);
    g->edx = t4;
    return 0x80004005u;
L_10267d27: ;
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, COW_IMG(0x1033f148u));
    t6 = rd32(self + 0x3cu);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(self + 0x38u);
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x34u, self);
    g->eax = rd32(self);
    g->edx = t7;
    t8 = rd32(self);
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall(g, rd32(t8 + 0x34u), arg1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (self + 0x1cu == 0u)
    {
        eax = self + 0x1cu;
        ecx = t10;
        edx = t11;
        edi = t9;
    }
    else
    {
        ecx = t10;
        edx = t11;
        edi = t9;
        if ((int32_t)edi < 0)
        {
            eax = self + 0x1cu;
        }
        else
        {
            wr32(sp0 - 0x38u, COW_IMG(0x1033f148u));
            t12 = rd32(self + 0x44u);
            wr32(sp0 - 0x3cu, t12);
            t13 = rd32(self + 0x40u);
            wr32(sp0 - 0x40u, t13);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, self + 0x1cu);
            wr32(sp0 - 0x4cu, self);
            g->eax = self + 0x1cu;
            g->edx = rd32(self);
            t14 = rd32(self);
            g->esp = sp0 - 0x34u;
            t15 = cow_thiscall(g, rd32(t14 + 0x34u), t13, 6, self, self + 0x1cu, 0u, t13, t12, COW_IMG(0x1033f148u));
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
            edi = t15;
        }
    }
    wr32(sp0 - 0x38u, self + 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 7, self + 0x1cu, rd32(sp0 - 0x34u), arg1, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), COW_IMG(0x1033f148u));   /* kernel32.dll!LeaveCriticalSection */
    t18 = g->edx;
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    t22 = rd32(sp0 - 0x1cu);
    wr32(g->fs_base, t19);
    g->ebx = t20;
    g->esi = t21;
    g->edi = t22;
    g->edx = t18;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267cd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
