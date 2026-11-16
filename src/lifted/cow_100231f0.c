/* f_0x100231f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100231f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(COW_IMG(0x10456e40u)) + rd16(rd32(self + 0x42u)) * 0x3cu;
    if ((int32_t)rd16(rd32(self + 0x42u)) <= 0)
    {
        loc_4 = t1;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e40u));
        edx = t1;
        loc_4 = t1;
        eax = arg1;
        ebx = 0u;
        edi = ecx + 0x18u;
L_10023222: ;
        g->eax = eax;
        g->ecx = edi - 0xcu;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, edi - 0xcu, arg1 + 0x34u);
        t3 = g->ecx;
        t4 = g->edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, edi, arg1 + 0x34u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd16(rd32(self + 0x42u)))
        {
            eax = rd16(rd32(self + 0x42u));
            edx = rd32(self + 0x42u);
            ebx = ebx + 1u;
            edi = edi + 0x3cu;
            goto L_10023222;
        }
    }
    if (rd16(rd32(self + 0x42u) + 2u) != 0u)
    {
        eax = loc_4;
        edx = arg1;
        ebp = 0u;
        edi = loc_4 + 0x18u;
L_1002325f: ;
        g->eax = eax;
        g->ecx = edi - 0xcu;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, edi - 0xcu, arg1 + 0x34u);
        t6 = g->ecx;
        t7 = g->edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, edi, arg1 + 0x34u);
        if ((int32_t)(ebp + 1u) < (int32_t)rd16(rd32(self + 0x42u) + 2u))
        {
            eax = rd16(rd32(self + 0x42u) + 2u);
            edx = rd32(self + 0x42u);
            ebp = ebp + 1u;
            edi = edi + 0x3cu;
            goto L_1002325f;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100231f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100231f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
