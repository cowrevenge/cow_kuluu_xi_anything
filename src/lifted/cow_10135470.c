/* f_0x10135470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10135470(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
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

    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, in_edx, 4, 0u, 0x40u, 0u, 0x80808080u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(self + 4u) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
        ecx = t2;
        edx = t3;
        goto L_1013549f;
    }
    eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    ecx = t2;
    edx = t3;
    if (rd8(self + 5u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 5u);
        goto L_1013549f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 5u);
    loc_c = 0x80804020u;
L_101354a4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x114u);
    t5 = g->edx;
    g->esp = sp0 - 8u;
    t6 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t5, 4, 1u, 1u, t4, loc_c);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x54u);
    wr32(arg1 + 0x4cu, t9);
    wr32(arg1 + 0x48u, 0xffffffffu);
    return (t9 & 0xffffff00u) | 1u;
L_1013549f: ;
    loc_c = 0x80909040u;
    goto L_101354a4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135470(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
