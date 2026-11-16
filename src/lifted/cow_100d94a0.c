/* f_0x100d94a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d94a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x1048fdf8u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1048fdf8u));
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, arg1);
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x100d95d0u), arg1, 2, arg1, sp0 - 8u);
        t2 = g->edx;
        if (t1 == 1u)
        {
            edx = t2;
            esi = ecx;
        }
        else
        {
            edx = t2;
            esi = ecx;
            wr32(sp0 - 8u, 0u);
            loc_8 = 0u;
        }
        wr32(sp0 - 4u, 0u);
        ebx = in_ebx;
        edi = esi + 0x19cu;
        loc_4 = 0u;
L_100d94e6: ;
        if (rd32(edi - 0x20u) == 0u)
        {
            eax = 0u;
            goto L_100d9538;
        }
        ebp = rd32(edi - 0x20u);
        ecx = arg1;
        esi = edi - 0xc4u;
L_100d94f9: ;
        if (rd8(ecx) != rd8(esi))
        {
            edx = (edx & 0xffffff00u) | rd8(ecx);
            ebx = (ebx & 0xffffff00u) | rd8(ecx);
            cf = rd8(ecx) < rd8(esi);
            goto L_100d951d;
        }
        edx = (edx & 0xffffff00u) | rd8(ecx);
        ebx = (ebx & 0xffffff00u) | rd8(ecx);
        if ((uint8_t)edx == 0u) goto L_100d9519;
        if (rd8(ecx + 1u) != rd8(esi + 1u))
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            ebx = (ebx & 0xffffff00u) | rd8(ecx + 1u);
            cf = rd8(ecx + 1u) < rd8(esi + 1u);
            goto L_100d951d;
        }
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 1u);
        if ((uint8_t)edx != 0u)
        {
            ecx = ecx + 2u;
            esi = esi + 2u;
            goto L_100d94f9;
        }
L_100d9519: ;
        ecx = 0u;
L_100d9522: ;
        if (ecx == 0u) goto L_100d9532;
        if (loc_8 == 0u)
        {
            eax = 0u;
            goto L_100d9538;
        }
        ecx = loc_8;
        if (ecx != ebp)
        {
            eax = 0u;
            goto L_100d9538;
        }
L_100d9532: ;
        if (edi != 0u)
        {
            eax = edi;
            goto L_100d954c;
        }
        eax = edi;
L_100d9538: ;
        wr32(sp0 - 4u, loc_4 + 1u);
        if ((int32_t)(loc_4 + 1u) < 64)
        {
            edi = edi + 0xd4u;
            loc_4 = loc_4 + 1u;
            goto L_100d94e6;
        }
    }
L_100d954c: ;
    g->edx = edx;
    return eax;
L_100d951d: ;
    ecx = -cf + 1u - cf;
    goto L_100d9522;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d94a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d94a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
