/* f_0x1014ff70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014ff70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662da4u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101ad820u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_1014ffc8;
    eax = t2;
    ecx = t3;
    edx = t4;
    ebx = t2;
    if (rd8(ebx) == 0u)
    {
        edi = 0u;
        goto L_1014ffa1;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx);
    edi = 0u;
L_1014ff8c: ;
    if ((uint8_t)eax == 0x20u) goto L_1014ffa1;
    if ((uint8_t)eax == 9u) goto L_1014ffa1;
    if ((uint8_t)eax == 0xau) goto L_1014ffa1;
    if (rd8(ebx + edi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + edi + 1u);
        edi = edi + 1u;
        goto L_1014ff8c;
    }
    edi = edi + 1u;
L_1014ffa1: ;
    if ((int32_t)rd32(COW_IMG(0x10371bbcu)) < 0) goto L_1014ffc8;
    esi = COW_IMG(0x10371ba8u);
L_1014ffaf: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10312980u), 5, ebx, esi, edi, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_1014ffd1;
    ecx = t6;
    edx = t7;
    if ((int32_t)rd32(esi + 0x2cu) >= 0)
    {
        esi = esi + 0x18u;
        goto L_1014ffaf;
    }
L_1014ffc8: ;
    return 1u;
L_1014ffd1: ;
    return rd32(esi + 0x14u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ff70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014ff70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
