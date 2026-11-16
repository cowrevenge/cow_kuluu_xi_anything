/* f_0x102613c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102613c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327938u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (arg2 == 0u)
    {
        ecx = t4;
        edx = t5;
        esi = t2;
        edi = t3;
    }
    else
    {
        ecx = t4;
        edx = t5;
        esi = t2;
        edi = t3;
        wr32(sp0 - 0x1cu, arg2);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(arg2) + 4u), ecx, 1, arg2);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if (rd32(edi + 0xcu) == 0u)
    {
        eax = rd32(edi + 0xcu);
    }
    else
    {
        eax = rd32(edi + 0xcu);
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        g->edx = edx;
        t8 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall(g, rd32(t8 + 8u), t8, 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    wr32(sp0 - 0x1cu, esi);
    wr32(edi + 0xcu, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
    t12 = g->edx;
    t13 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t13);
    g->edx = t12;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102613c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102613c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
