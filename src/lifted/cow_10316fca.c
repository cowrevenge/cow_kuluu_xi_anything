/* f_0x10316fca - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10316fca(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 4u) goto L_10316ffa;
    if (arg4 < 2u) goto L_10316ff5;
    if (arg4 > 0x7fffffffu) goto L_10316ff5;
    if (arg3 == 0u) goto L_10316ffa;
    if (arg3 == 0x40u) goto L_10316ffa;
L_10316ff5: ;
    eax = 0xffffffffu;
L_10317075: ;
    return eax;
L_10316ffa: ;
    g->ecx = self;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10318845u), 5, arg1, arg1, in_esi, in_edi, in_ebx);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x103187bdu), 3, arg1, arg1, arg1);
    t5 = g->edx;
    wr16(arg1 + 0xcu, rd16(arg1 + 0xcu) & 0xc2f3u);
    if ((arg3 & 4u) == 0u)
    {
        ecx = rd32(arg1 + 0xcu);
        edx = t5;
        goto L_10317032;
    }
    ecx = rd32(arg1 + 0xcu);
    edx = t5;
    wr32(arg1 + 0xcu, ecx | 4u);
    eax = arg1 + 0x14u;
    ecx = ecx | 4u;
    edi = 2u;
L_1031705e: ;
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 0x18u, edi);
    wr32(arg1 + 8u, eax);
    wr32(arg1, eax);
    loc_8 = 0u;
L_1031706a: ;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, edx, 1, 1, arg1);
    eax = loc_8;
    goto L_10317075;
L_10317032: ;
    if (arg2 != 0u) goto L_10317058;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, arg4 & 0xfffffffeu, in_esi, in_edi);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_10317050;
    }
    eax = t6;
    edx = t7;
    wr32(COW_IMG(0x109b271cu), rd32(COW_IMG(0x109b271cu)) + 1u);
    ecx = arg4 & 0xfffffffeu;
    loc_8 = 0xffffffffu;
    goto L_1031706a;
L_10317050: ;
    wr16(arg1 + 0xcu, rd16(arg1 + 0xcu) | 0x408u);
    ecx = arg4 & 0xfffffffeu;
    edi = arg4 & 0xfffffffeu;
    goto L_1031705e;
L_10317058: ;
    t8 = (ecx & 0xffff00ffu) | (uint8_t)(ecx >> 8u | 5u) << 8u;
    wr32(arg1 + 0xcu, t8);
    eax = arg2;
    ecx = t8;
    edi = arg4 & 0xfffffffeu;
    goto L_1031705e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316fca(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316fca(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
