/* f_0x10317e4a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10317e4a(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, arg1, 0u, 0x88u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(rd32(sp0 + 8u)) == 0u) goto L_10317e88;
    eax = (t1 & 0xffffff00u) | rd8(rd32(sp0 + 8u));
    ecx = t2;
    edx = t3;
    esi = rd32(sp0 + 8u);
    if ((uint8_t)eax != 0x2eu) goto L_10317e8f;
    if (rd8(esi + 1u) == 0u)
    {
        eax = esi + 1u;
        goto L_10317e8f;
    }
    eax = esi + 1u;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10317500u), 3, arg1 + 0x80u, eax, in_edi);
L_10317e88: ;
    eax = 0u;
L_10317f11: ;
    return eax;
L_10317e8f: ;
    wr32(sp0 + 8u, 0u);
    ebx = in_ebx;
L_10317e93: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10322bb0u), ecx, 4, esi, COW_IMG(0x1034a2bcu), in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_10317f0e;
    }
    eax = t4;
    edx = t5;
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax + esi);
        edi = eax + esi;
        goto L_10317ec1;
    }
    ebx = (ebx & 0xffffff00u) | rd8(eax + esi);
    edi = eax + esi;
    if ((int32_t)eax >= 64) goto L_10317f0e;
    if ((uint8_t)ebx == 0x2eu) goto L_10317f0e;
    loc_14 = eax;
    loc_18 = esi;
    loc_1c = arg1;
L_10317ef5: ;
    g->ecx = COW_IMG(0x1034a2bcu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, loc_1c, loc_18, loc_14);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)ebx == 0x2cu) goto L_10317e88;
    eax = t6;
    ecx = t7;
    edx = t8;
    if ((uint8_t)ebx == 0u) goto L_10317e88;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    esi = edi + 1u;
    goto L_10317e93;
L_10317ec1: ;
    if (rd32(sp0 + 8u) != 1u) goto L_10317edb;
    if ((int32_t)eax >= 64) goto L_10317f0e;
    if ((uint8_t)ebx == 0x5fu) goto L_10317f0e;
    loc_14 = eax;
    eax = arg1 + 0x40u;
    loc_18 = esi;
L_10317ef4: ;
    loc_1c = eax;
    goto L_10317ef5;
L_10317edb: ;
    if (rd32(sp0 + 8u) != 2u) goto L_10317f0e;
    if ((uint8_t)ebx == 0u) goto L_10317eea;
    if ((uint8_t)ebx != 0x2cu) goto L_10317f0e;
L_10317eea: ;
    loc_14 = eax;
    eax = arg1 + 0x80u;
    loc_18 = esi;
    goto L_10317ef4;
L_10317f0e: ;
    eax = 0xffffffffu;
    goto L_10317f11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317e4a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317e4a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
