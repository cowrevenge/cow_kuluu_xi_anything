/* f_0x101d83b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101d83b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2) != 3u)
    {
        eax = rd32(arg2);
        goto L_101d83e5;
    }
    t1 = rd32(arg2 + 8u);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, in_edx, 4, 3u, 9u, t1, 0x80808080u);
    t3 = g->edx;
    t4 = rd16(arg2 + 4u);
    eax = t2;
    edx = t3;
    loc_c = 0x80808080u;
    loc_10 = t4;
    loc_14 = 0x1au;
L_101d8423: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 1u, loc_14, loc_10, loc_c);
    eax = t11;
L_101d842c: ;
    t12 = rd16(arg2 + 4u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t13 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t12, 4, 0u, 0x15u, t12, 0x80808080u);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_101d83e5: ;
    if (eax != 4u) goto L_101d842c;
    t5 = rd32(arg2 + 0xcu);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t5, 4, 3u, 9u, t5, 0x80808080u);
    t6 = g->edx;
    t7 = rd16(arg2 + 4u);
    g->eax = t7;
    t8 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t6, 4, 2u, 0x1bu, t7, 0x80808080u);
    t9 = g->edx;
    t10 = rd16(arg2 + 4u);
    eax = t8;
    edx = t9;
    loc_c = 0x80905050u;
    loc_10 = t10;
    loc_14 = 0x19u;
    goto L_101d8423;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d83b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d83b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
