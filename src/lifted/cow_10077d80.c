/* f_0x10077d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10077d80(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        edx = in_edx;
        goto L_10077e0a;
    }
    eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
    {
        edx = in_edx;
        goto L_10077e0a;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
    eax = (uint32_t)(int16_t)eax;
    wr32(sp0 - 0x28u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        esi = 0u;
        goto L_10077dbf;
    }
    eax = t1;
    edx = t2;
    esi = 0u;
L_10077dae: ;
    t3 = rd32(eax + 0x14u);
    wr32(esi * 4u + sp0 - 0x18u, t3);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100e8c70u), 9, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        esi = esi + 1u;
        goto L_10077dae;
    }
    edx = t5;
    esi = esi + 1u;
L_10077dbf: ;
    ebx = 0u;
L_10077dc1: ;
    if (rd32(COW_IMG(0x10480af0u) + ebx * 4u) == 0u) goto L_10077e01;
    eax = rd32(COW_IMG(0x10480af0u) + ebx * 4u);
    if (rd32(eax + 0xa0u) == 0u) goto L_10077e01;
    if ((int32_t)esi <= 0)
    {
        edx = 0u;
        goto L_10077e01;
    }
    edx = 0u;
    edi = rd32(eax + 0x188u);
L_10077de2: ;
    if (edi != rd32(edx * 4u + sp0 - 0x18u)) goto L_10077dfc;
    if (eax == 0u) goto L_10077dfc;
    if (rd32(eax + 0x170u) == 2u) goto L_10077dfc;
    ecx = rd32(eax + 0x170u);
    if (ecx != 3u) goto L_10077e13;
L_10077dfc: ;
    if ((int32_t)(edx + 1u) < (int32_t)esi)
    {
        edx = edx + 1u;
        goto L_10077de2;
    }
    edx = edx + 1u;
L_10077e01: ;
    if ((int32_t)(ebx + 1u) < 2304)
    {
        ebx = ebx + 1u;
        goto L_10077dc1;
    }
L_10077e0a: ;
    g->edx = edx;
    return 0u;
L_10077e13: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = edx;
    return rd32(COW_IMG(0x10480af0u) + ebx * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
