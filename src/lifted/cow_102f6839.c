/* f_0x102f6839 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f6839(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1 + 4u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x10302910u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x103028cbu), 2, arg1, 0x50u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edi = t1;
        wr32(eax, COW_IMG(0x102f5ed9u));
        wr32(eax + 4u, COW_IMG(0x102f5fd5u));
        wr32(eax + 8u, COW_IMG(0x102f6063u));
        wr32(eax + 0xcu, COW_IMG(0x102f60f5u));
        wr32(eax + 0x10u, COW_IMG(0x102f6193u));
        wr32(eax + 0x14u, COW_IMG(0x102f61f4u));
        wr32(eax + 0x18u, COW_IMG(0x102f6255u));
        wr32(eax + 0x1cu, COW_IMG(0x102f64e7u));
        wr32(eax + 0x20u, COW_IMG(0x102f6605u));
        wr32(eax + 0x24u, COW_IMG(0x102f6728u));
        wr32(eax + 0x28u, COW_IMG(0x102f6809u));
        wr32(eax + 0x2cu, edi);
        ecx = eax + 0x3cu;
        edx = 2u;
L_102f68ce: ;
        wr32(ecx - 8u, 0u);
        wr32(ecx, 0u);
        if (edx != 1u)
        {
            ecx = ecx - 4u;
            edx = edx - 1u;
            goto L_102f68ce;
        }
        edx = edx - 1u;
        wr32(eax + 0x40u, 0u);
        wr32(eax + 0x44u, 0u);
        wr32(eax + 0x48u, 0x50u);
        wr32(arg1 + 4u, eax);
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10302913u), 0);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(rd32(arg1) + 0x14u, 0x35u);
        wr32(rd32(arg1) + 0x18u, 0u);
        g->edx = t8;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), t7, 1, arg1);
        t9 = g->edx;
        edx = t9;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6839(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f6839(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
