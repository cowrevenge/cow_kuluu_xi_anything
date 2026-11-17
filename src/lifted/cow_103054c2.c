/* f_0x103054c2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_103054c2(Guest* g)
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x1cu);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x188u, t2);
    wr32(t2, COW_IMG(0x1030541cu));
    wr32(t2 + 8u, 0u);
    wr32(t2 + 0xcu, 0u);
    if (rd8(arg1 + 0x4au) == 0u)
    {
        edx = t4;
    }
    else
    {
        ecx = t3;
        edx = t4;
        edi = t2;
        t5 = rd32(arg1 + 0x110u);
        wr32(edi + 0x10u, t5);
        if ((uint8_t)arg2 == 0u)
        {
            eax = t5;
            t13 = rd32(arg1 + 0x64u) * rd32(arg1 + 0x5cu);
            g->eax = t13;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t14 = cow_thiscall_cdecl(g, rd32(rd32(arg1 + 4u) + 8u), rd32(arg1 + 4u), 4, arg1, 1u, t13, eax);
            t15 = g->edx;
            wr32(edi + 0xcu, t14);
            edx = t15;
        }
        else
        {
            eax = t5;
            t6 = rd32(arg1 + 0x60u);
            g->eax = eax;
            g->edx = edx;
            t7 = rd32(arg1 + 4u);
            g->esp = sp0 - 0xcu;
            t8 = cow_cdecl(g, COW_IMG(0x102f58ddu), 4, t6, eax, eax, in_ebp);
            t9 = g->edx;
            t10 = rd32(arg1 + 0x64u) * rd32(arg1 + 0x5cu);
            g->eax = t10;
            g->edx = t9;
            g->esp = sp0 - 0x14u;
            t11 = cow_thiscall_cdecl(g, rd32(t7 + 0x10u), eax, 5, arg1, 1u, 0u, t10, t8);
            t12 = g->edx;
            wr32(edi + 8u, t11);
            edx = t12;
        }
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103054c2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103054c2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
