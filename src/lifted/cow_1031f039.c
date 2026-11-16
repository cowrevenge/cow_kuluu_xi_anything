/* f_0x1031f039 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031f039(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10323bceu), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_1031f0c2;
    }
    ecx = t1;
    edx = t3;
    if (arg1 != COW_IMG(0x103d03c0u)) goto L_1031f057;
    eax = 0u;
L_1031f062: ;
    wr32(COW_IMG(0x109b271cu), rd32(COW_IMG(0x109b271cu)) + 1u);
    if ((rd16(arg1 + 0xcu) & 0x10cu) != 0u) goto L_1031f0c2;
    if (rd32(COW_IMG(0x109b27d4u) + eax * 4u) != 0u)
    {
        edi = COW_IMG(0x109b27d4u) + eax * 4u;
        goto L_1031f0a8;
    }
    edi = COW_IMG(0x109b27d4u) + eax * 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x1000u, in_edi, in_ebx);
    t5 = g->edx;
    wr32(edi, t4);
    if (t4 != 0u)
    {
        edx = t5;
        goto L_1031f0a8;
    }
    edx = t5;
    wr32(arg1 + 8u, arg1 + 0x14u);
    wr32(arg1, arg1 + 0x14u);
    wr32(arg1 + 0x18u, 2u);
    wr32(arg1 + 4u, 2u);
L_1031f0b5: ;
    wr16(arg1 + 0xcu, rd16(arg1 + 0xcu) | 0x1102u);
    g->edx = edx;
    return 1u;
L_1031f057: ;
    if (arg1 != COW_IMG(0x103d03e0u)) goto L_1031f0c2;
    eax = 1u;
    goto L_1031f062;
L_1031f0a8: ;
    t6 = rd32(edi);
    wr32(arg1 + 0x18u, 0x1000u);
    wr32(arg1 + 8u, t6);
    wr32(arg1, t6);
    wr32(arg1 + 4u, 0x1000u);
    goto L_1031f0b5;
L_1031f0c2: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f039(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031f039(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
