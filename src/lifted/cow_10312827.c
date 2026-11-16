/* f_0x10312827 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10312827(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
    edi = arg1;
L_1031282f: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd8(edi) * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->edx = edx;
        t1 = rd8(edi);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t1, 8u, in_edi);
        t3 = g->edx;
        eax = t2;
        ecx = 8u;
        edx = t3;
    }
    if (eax == 0u) goto L_1031285d;
    edi = edi + 1u;
    goto L_1031282f;
L_1031285d: ;
    if (rd8(edi) == 0x2du)
    {
        ebp = rd8(edi);
        edi = edi + 1u;
        goto L_1031286d;
    }
    ebp = rd8(edi);
    esi = rd8(edi);
    edi = edi + 1u;
    if (esi != 0x2bu) goto L_10312871;
L_1031286d: ;
    esi = rd8(edi);
    edi = edi + 1u;
L_10312871: ;
    ebx = 0u;
L_10312873: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 4u, in_edi);
        t5 = g->edx;
        eax = t4;
        ecx = 4u;
        edx = t5;
    }
    if (eax == 0u) goto L_103128a4;
    ebx = ebx * 0xau + esi - 0x30u;
    esi = rd8(edi);
    edi = edi + 1u;
    goto L_10312873;
L_103128a4: ;
    if (ebp != 0x2du)
    {
        eax = ebx;
    }
    else
    {
        eax = ebx;
        eax = -eax;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312827(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312827(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
