/* f_0x10149d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10149d40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_edi);
    wr32(sp0 - 0x50u, arg1);
    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    t1 = cow_stdcall(g, COW_IMG(0x10161010u), 1, arg1);
    t2 = g->edx;
    t3 = rd32(self + 0x14u);
    wr32(sp0 - 0x50u, t3);
    g->edx = t2;
    t4 = rd32(COW_IMG(0x106218fcu));
    t5 = cow_thiscall(g, COW_IMG(0x10160f00u), t4, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebp = t1;
        wr32(sp0 - 0x50u, in_esi);
        if (rd8(eax + 3u) != 0x1au)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 3u);
            esi = (in_esi & 0xffff0000u) | rd8(eax + 4u);
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 3u);
            esi = (in_esi & 0xffff0000u) | rd8(eax + 4u);
            wr32(sp0 - 0x54u, 0xc98u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t8 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc98u);
            t9 = g->ecx;
            t10 = g->edx;
            if ((uint8_t)t8 == 0u)
            {
                eax = t8;
                ecx = t9;
                edx = t10;
            }
            else
            {
                eax = t8;
                ecx = t9;
                edx = t10;
                esi = esi + 5u;
            }
            wr32(sp0 - 0x54u, 0xc99u);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x50u;
            t11 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc99u);
            t12 = g->ecx;
            if ((uint8_t)t11 == 0u)
            {
                ecx = t12;
            }
            else
            {
                ecx = t12;
                esi = esi + 5u;
            }
            if ((uint16_t)esi > 0x64u)
            {
                esi = 0x64u;
            }
        }
        wr32(sp0 - 0x54u, (uint16_t)esi);
        wr32(sp0 - 0x58u, COW_IMG(0x103719d4u));
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719d4u), (uint16_t)esi, in_esi, in_edi);
        t13 = g->edx;
        wr32(sp0 - 0x60u, 0x3f800000u);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x68u, 1u);
        wr32(sp0 - 0x6cu, arg3);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        t14 = (t13 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1eu) + 0x28u);
        wr32(sp0 - 0x74u, t14);
        wr32(sp0 - 0x78u, arg2);
        g->edx = t14;
        g->esp = sp0 - 0x5cu;
        t15 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x40u, 7, arg2, t14, sp0 - 0x40u, arg3, 1u, 0x3f800000u, 0x3f800000u);
        t16 = g->edx;
        wr32(sp0 - 0x7cu, ebp);
        wr32(sp0 - 0x80u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        g->ebx = t15;
        g->ecx = sp0 - 0x40u;
        g->esp = sp0 - 0x70u;
        t17 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10352ff0u), ebp, arg2, rd32(sp0 - 0x74u));
        t18 = g->ecx;
        wr32(sp0 - 0x50u, 0x3f800000u);
        wr32(sp0 - 0x54u, 0x3f800000u);
        wr32(sp0 - 0x58u, 1u);
        if (ebp != (uint16_t)esi)
        {
            eax = (t17 & 0xffff0000u) | rd16(self + 0x1eu);
            ebx = t15;
            wr32(sp0 - 0x5cu, arg3);
            ecx = arg3;
            loc_5c = arg3;
        }
        else
        {
            eax = (t17 & 0xffff0000u) | rd16(self + 0x1eu);
            ecx = t18;
            ebx = t15;
            wr32(sp0 - 0x5cu, 0x802060a0u);
            loc_5c = 0x802060a0u;
        }
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        t19 = (eax & 0xffff0000u) | (uint16_t)((uint16_t)eax + 0x28u);
        wr32(sp0 - 0x64u, t19);
        wr32(sp0 - 0x68u, ebx);
        g->esp = sp0 - 0x4cu;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, ebx, t19, sp0 - 0x40u, loc_5c, 1u, 0x3f800000u, 0x3f800000u);
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10149d40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
