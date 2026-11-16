/* f_0x1031cc56 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031cc56(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u) + 0xf8u;
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 4u);
    wr32(sp0 + 4u, t2);
    if (t4 < arg3)
    {
        eax = t1;
        ecx = t3;
        ebx = t2;
        esi = t4;
        edi = t1;
        loc_8 = t1;
        goto L_1031cc9b;
    }
    ecx = t3;
    ebx = t2;
    edi = t1;
    wr8(edi, (uint8_t)arg3);
    if (arg3 + edi >= ebx)
    {
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
        wr32(ecx, arg3 + rd32(ecx));
        wr32(ecx + 4u, rd32(ecx + 4u) - arg3);
    }
    eax = edi + 8u;
L_1031cd69: ;
    eax = (eax << 4u) - ecx * 0xfu;
L_1031cd75: ;
    g->edx = arg3;
    return eax;
L_1031cc9b: ;
    if (rd8(edi + esi) != 0u)
    {
        esi = edi + esi;
        eax = esi;
    }
    if (arg3 + eax >= ebx) goto L_1031ccee;
L_1031ccab: ;
    if (rd8(eax) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        goto L_1031cce1;
    }
    ebx = eax + 1u;
    esi = 1u;
L_1031ccb7: ;
    if (rd8(ebx) != 0u) goto L_1031ccc0;
    ebx = ebx + 1u;
    esi = esi + 1u;
    goto L_1031ccb7;
L_1031ccc0: ;
    if (esi >= arg3) goto L_1031cd12;
    if (eax != loc_8) goto L_1031ccce;
    wr32(ecx + 4u, esi);
L_1031ccda: ;
    eax = ebx;
    edi = loc_8;
L_1031cce6: ;
    if (arg3 + eax < rd32(sp0 + 4u)) goto L_1031ccab;
L_1031ccee: ;
    esi = ecx + 8u;
L_1031ccf1: ;
    if (esi >= edi) goto L_1031cd73;
    if (arg3 + esi >= rd32(sp0 + 4u)) goto L_1031cd73;
    eax = arg3 + esi;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_1031cd43;
    }
    eax = 1u;
    ebx = esi + 1u;
L_1031cd09: ;
    if (rd8(ebx) != 0u) goto L_1031cd33;
    eax = eax + 1u;
    ebx = ebx + 1u;
    goto L_1031cd09;
L_1031ccce: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - esi);
    if (rd32(sp0 + 8u) < arg3) goto L_1031cd73;
    goto L_1031ccda;
L_1031cce1: ;
    eax = eax + (uint8_t)ebx;
    goto L_1031cce6;
L_1031cd12: ;
    if (arg3 + eax >= rd32(sp0 + 4u))
    {
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
        ebx = arg3 + eax;
        wr32(ecx, ebx);
        wr32(ecx + 4u, esi - arg3);
    }
    wr8(eax, (uint8_t)arg3);
    eax = eax + 8u;
    goto L_1031cd69;
L_1031cd33: ;
    if (eax >= arg3) goto L_1031cd4a;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
    if (rd32(sp0 + 8u) < arg3) goto L_1031cd73;
    esi = ebx;
    goto L_1031ccf1;
L_1031cd43: ;
    esi = esi + (uint8_t)eax;
    goto L_1031ccf1;
L_1031cd4a: ;
    if (arg3 + esi >= rd32(sp0 + 4u))
    {
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
        ebx = arg3 + esi;
        wr32(ecx, ebx);
        wr32(ecx + 4u, eax - arg3);
    }
    wr8(esi, (uint8_t)arg3);
    eax = esi + 8u;
    goto L_1031cd69;
L_1031cd73: ;
    eax = 0u;
    goto L_1031cd75;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cc56(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031cc56(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
