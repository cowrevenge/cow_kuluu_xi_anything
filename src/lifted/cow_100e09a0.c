/* f_0x100e09a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100e09a0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = arg2;
    edi = 0u;
L_100e09b2: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd16(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(esi) * 2u) & 0x103u;
        ecx = (uint32_t)(int8_t)rd8(esi);
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->edx = edx;
        t1 = rd8(esi);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)t1, 0x103u, in_edi);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if (eax == 0u) goto L_100e09f5;
    t5 = rd8(esi);
    wr8(arg1 + esi - arg2, (uint8_t)t5);
    if ((int32_t)(edi + 1u) < 16)
    {
        eax = (eax & 0xffffff00u) | t5;
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_100e09b2;
    }
    g->edx = edx;
    return;
L_100e09f5: ;
    wr8(arg1 + edi, 0u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e09a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100e09a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
