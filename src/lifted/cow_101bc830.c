/* f_0x101bc830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101bc830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0xcu) == 0u) goto L_101bc8a3;
    ecx = rd32(self + 0xcu);
    if (arg1 == 0u) goto L_101bc8a3;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_101bc85c;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_101bc890;
    if (eax == 3u) goto L_101bc890;
L_101bc85c: ;
    if (eax == 1u) goto L_101bc890;
    zf = eax == 1u;
    sf = (int32_t)(eax - 1u) < 0;
    of = ((eax ^ 1u) & (eax ^ eax - 1u)) >> 0x1fu;
    if (zf || sf != of) goto L_101bc87d;
    if ((int32_t)eax > 3) goto L_101bc87d;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101c88a0u), arg2, g->ecx, edx, 1, 4, arg1, ecx, arg2, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101bc87d: ;
    g->edx = arg2;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10312980u), 3, arg1, ecx, arg2);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101bc890: ;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, arg1, ecx, arg2);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101bc8a3: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bc830(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
