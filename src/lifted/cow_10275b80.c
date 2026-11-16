/* f_0x10275b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10275b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((arg2 & 0xfu) == 0u) goto L_10275bd7;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2b28u), arg2);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    ebx = arg2;
    edi = arg3;
L_10275ba0: ;
    if ((ebx + 1u & 0xfu) != 0u)
    {
        ebx = ebx + 1u;
        edi = edi - 1u;
        goto L_10275ba0;
    }
    ebx = ebx + 1u;
    edi = edi - 1u;
    if (edi != 0u) goto L_10275bbc;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2b0cu), in_edi);
    return;
L_10275bbc: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2af4u), ebx);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2adcu), edi);
    t7 = g->edx;
    edx = t7;
L_10275bdb: ;
    if (rd32(COW_IMG(0x1099cf4cu) + arg1 * 0x60u) == 0u) goto L_10275c04;
    ecx = rd32(COW_IMG(0x1099cf4cu) + arg1 * 0x60u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2aa8u), arg1);
    return;
L_10275bd7: ;
    edx = in_edx;
    ebx = arg2;
    edi = arg3;
    goto L_10275bdb;
L_10275c04: ;
    t8 = COW_IMG(0x1099cefcu) + arg1 * 0x60u;
    wr32(COW_IMG(0x1099cef8u) + arg1 * 0x60u, edi);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, t8, COW_IMG(0x103b2aa0u), arg4, in_edi, in_esi);
    t9 = rd32(COW_IMG(0x1099cef8u) + arg1 * 0x60u);
    wr32(COW_IMG(0x1099cf4cu) + arg1 * 0x60u, ebx);
    wr32(COW_IMG(0x1099cf50u) + arg1 * 0x60u, ebx);
    wr32(COW_IMG(0x1099cf54u) + arg1 * 0x60u, ebx + t9);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10275b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
