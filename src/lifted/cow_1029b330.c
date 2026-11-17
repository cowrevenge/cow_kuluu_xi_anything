/* f_0x1029b330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1029b330(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(arg3 + 0x48u));
    t2 = rd32(arg3 + 0x48u);
    wr32(arg1, t1);
    g->eax = arg3;
    g->ecx = arg1;
    g->edx = t1 * 4u;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, t1 * 4u, COW_IMG(0x103bc66cu), 0xb3u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(arg2, t3);
    if (t1 != 0u)
    {
        ecx = t4;
        edx = t5;
        esi = t2 + 4u;
        edi = t1;
L_1029b36d: ;
        if ((int32_t)rd32(esi) <= 0)
        {
            eax = rd32(esi);
            esi = esi + 4u;
            edi = edi - 1u;
            t9 = rd32(arg2);
            wr32(edi * 4u + t9, 0u);
            edx = t9;
            esi = esi - eax * 4u;
        }
        else
        {
            eax = rd32(esi);
            esi = esi + 4u;
            edi = edi - 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t6 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, eax * 4u, COW_IMG(0x103bc66cu), 0xb7u);
            t7 = g->edx;
            t8 = rd32(arg2);
            wr32(edi * 4u + t8, t6);
            ecx = t8;
            edx = t7;
            esi = eax * 4u + esi;
        }
        if (edi != 0u) goto L_1029b36d;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029b330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
