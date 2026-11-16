/* f_0x1024a370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1024a370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1024a38e;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1024a260u), 3, arg2, arg3, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_1024a3ea;
    ecx = t2;
    edx = t3;
L_1024a38e: ;
L_1024a395: ;
    eax = rd32(COW_IMG(0x106690c8u));
    esi = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
L_1024a3a0: ;
    if (esi - 0xf4u < eax)
    {
        esi = esi - 0xf4u;
        goto L_1024a3bb;
    }
    esi = esi - 0xf4u;
    if (rd32(esi + 0xc0u) == 0u)
    {
        ecx = rd32(esi + 0xc0u);
        goto L_1024a3bb;
    }
    if (rd32(esi + 0x48u) != 0u)
    {
        ecx = rd32(esi + 0x48u);
        goto L_1024a3bf;
    }
    ecx = rd32(esi + 0x48u);
L_1024a3bb: ;
    if (arg1 == 1u) goto L_1024a3c5;
L_1024a3bf: ;
    if (esi >= eax) goto L_1024a3a0;
L_1024a3c9: ;
    if ((int8_t)arg3 < 0) goto L_1024a3df;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1024a2c0u), 1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_1024a395;
    }
    eax = rd32(COW_IMG(0x106690c8u));
L_1024a3df: ;
    if (esi < eax) goto L_1024a3ea;
L_1024a3e3: ;
    return esi;
L_1024a3c5: ;
    if (esi >= eax) goto L_1024a3e3;
    goto L_1024a3c9;
L_1024a3ea: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024a370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024a370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
