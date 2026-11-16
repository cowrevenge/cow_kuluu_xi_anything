/* f_0x1026e480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026e480(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(COW_IMG(0x1099aec8u), arg1);
    wr32(COW_IMG(0x1099aeccu), 0u);
    g->ecx = arg1 * 0xacu;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg1 * 0xacu, COW_IMG(0x103b17b4u), 0x487u);
    t2 = g->ecx;
    wr32(COW_IMG(0x1099aed0u), t1);
    wr32(COW_IMG(0x1099aed4u), arg2);
    wr32(COW_IMG(0x1099aed8u), 0u);
    if (arg2 != 0u)
    {
        ecx = t2;
        g->ecx = ecx;
        g->edx = arg2 * 0xc0u;
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 * 0xc0u, COW_IMG(0x103b17a8u), 0x494u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(COW_IMG(0x1099aedcu), t3);
        if ((int32_t)arg2 <= 0)
        {
            ecx = t4;
        }
        else
        {
            edx = t5;
            ebx = 0u;
            esi = arg2;
L_1026e509: ;
            t6 = ebx + rd32(COW_IMG(0x1099aedcu));
            g->ecx = t6;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x1027db00u), 1, t6);
            t7 = g->ecx;
            t8 = g->edx;
            if (esi != 1u)
            {
                edx = t8;
                ebx = ebx + 0xc0u;
                esi = esi - 1u;
                goto L_1026e509;
            }
            ecx = t7;
        }
    }
    else
    {
        ecx = t2;
        wr32(COW_IMG(0x1099aedcu), arg2);
    }
    if ((int32_t)arg1 > 0)
    {
        esi = 0u;
        edi = arg1;
L_1026e52a: ;
        t9 = esi + rd32(COW_IMG(0x1099aed0u));
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1026e550u), t9, g->ecx, g->edx, 1, 1, t9);
        t10 = g->ecx;
        if (edi != 1u)
        {
            ecx = t10;
            esi = esi + 0xacu;
            edi = edi - 1u;
            goto L_1026e52a;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026e480(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
