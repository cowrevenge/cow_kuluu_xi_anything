/* f_0x10174ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10174ec0(Guest* g)
{
    double d21;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c8;
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
    uint32_t t20;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 276u);

    wr32(sp0 - 0xdcu, in_ebx);
    wr32(sp0 - 0xe0u, in_ebp);
    wr32(sp0 - 0xe4u, in_esi);
    wr32(sp0 - 0xe8u, in_edi);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621a18u), 0xbf000000u);
    wr32(COW_IMG(0x10621a1cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621a20u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621a28u), 0x3f000000u);
    wr32(COW_IMG(0x10621a2cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621a30u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621a38u), 0x3f000000u);
    wr32(COW_IMG(0x10621a3cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621a40u), 0xbf000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621a48u), 0xbf000000u);
    wr32(COW_IMG(0x10621a4cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621a50u), 0xbf000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621a58u), 0xbf000000u);
    wr32(COW_IMG(0x10621a5cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621a60u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621a68u), 0xbf000000u);
    wr32(COW_IMG(0x10621a6cu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621a70u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621a78u), 0x3f000000u);
    wr32(COW_IMG(0x10621a7cu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621a80u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(COW_IMG(0x10621a24u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a34u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a44u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a54u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a64u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a74u), 0x8000ff00u);
    wr32(COW_IMG(0x10621a84u), 0x8000ff00u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621a88u), 0x3f000000u);
    wr32(COW_IMG(0x10621a8cu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621a90u), 0xbf000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621a98u), 0xbf000000u);
    wr32(COW_IMG(0x10621a9cu), 0x3f000000u);
    wr32(COW_IMG(0x10621aa0u), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621aa8u), 0xbf000000u);
    wr32(COW_IMG(0x10621aacu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621ab0u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621ab8u), 0xbf000000u);
    wr32(COW_IMG(0x10621abcu), 0xbf000000u);
    wr32(COW_IMG(0x10621ac0u), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621ac8u), 0xbf000000u);
    wr32(COW_IMG(0x10621accu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621ad0u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621ad8u), 0x3f000000u);
    wr32(COW_IMG(0x10621adcu), 0xbf000000u);
    wr32(COW_IMG(0x10621ae0u), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(COW_IMG(0x10621ae8u), 0x3f000000u);
    wr32(COW_IMG(0x10621aecu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(COW_IMG(0x10621af0u), 0x3f000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621af8u), 0x3f000000u);
    wr32(COW_IMG(0x10621afcu), 0xbf000000u);
    wr32(COW_IMG(0x10621b00u), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(COW_IMG(0x10621a94u), 0x8000ff00u);
    wr32(COW_IMG(0x10621aa4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621ab4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621ac4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621ad4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621ae4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621af4u), 0x8000ff00u);
    wr32(COW_IMG(0x10621b04u), 0x8000ff00u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621b08u), 0x3f000000u);
    wr32(COW_IMG(0x10621b0cu), 0x3f000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621b10u), 0xbf000000u);
    wr32(sp0 - 0xd4u, 0xbf000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621b18u), 0xbf000000u);
    wr32(COW_IMG(0x10621b1cu), 0xbf000000u);
    wr32(sp0 - 0xd8u, 0xbf000000u);
    wr32(COW_IMG(0x10621b14u), 0x8000ff00u);
    wr32(COW_IMG(0x10621b24u), 0x8000ff00u);
    wr32(COW_IMG(0x10621b34u), 0x8000ff00u);
    t1 = rd32(COW_IMG(0x10621a10u));
    wr32(COW_IMG(0x10621b20u), 0xbf000000u);
    wr32(sp0 - 0xd4u, 0x3f000000u);
    wr32(sp0 - 0xd0u, 0xbf000000u);
    wr32(COW_IMG(0x10621b28u), 0xbf000000u);
    wr32(COW_IMG(0x10621b2cu), 0x3f000000u);
    wr32(COW_IMG(0x10621b30u), 0xbf000000u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = 0xbf000000u;
    }
    else
    {
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 0u);
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf4u, t2);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t2) + 0xf4u), rd32(t2), 3, t2, 0u, 0u);
        wr32(sp0 - 0xecu, 5u);
        wr32(sp0 - 0xf0u, 1u);
        wr32(sp0 - 0xf4u, 0u);
        t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t3);
        cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 1u, 5u);
        wr32(sp0 - 0xecu, 2u);
        wr32(sp0 - 0xf0u, 2u);
        wr32(sp0 - 0xf4u, 0u);
        t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t4);
        cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 2u, 2u);
        wr32(sp0 - 0xecu, 1u);
        wr32(sp0 - 0xf0u, 3u);
        wr32(sp0 - 0xf4u, 0u);
        t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t5);
        cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 3u, 1u);
        wr32(sp0 - 0xecu, 6u);
        wr32(sp0 - 0xf0u, 4u);
        wr32(sp0 - 0xf4u, 0u);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t6);
        cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 4u, 6u);
        wr32(sp0 - 0xecu, 2u);
        wr32(sp0 - 0xf0u, 5u);
        wr32(sp0 - 0xf4u, 0u);
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t7);
        cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 5u, 2u);
        wr32(sp0 - 0xecu, 1u);
        wr32(sp0 - 0xf0u, 6u);
        wr32(sp0 - 0xf4u, 0u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t8);
        cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 0u, 6u, 1u);
        wr32(sp0 - 0xecu, 1u);
        wr32(sp0 - 0xf0u, 4u);
        wr32(sp0 - 0xf4u, 1u);
        t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t9);
        cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 1u, 4u, 1u);
        wr32(sp0 - 0xecu, 1u);
        wr32(sp0 - 0xf0u, 1u);
        wr32(sp0 - 0xf4u, 1u);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf8u, t10);
        cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 1u, 1u, 1u);
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 0x89u);
        t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf4u, t11);
        cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x89u, 0u);
        wr32(sp0 - 0xecu, 0x42u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf0u, t12);
        g->eax = t12;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t13 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        t14 = rd32(COW_IMG(0x1045666cu));
        t15 = cow_thiscall(g, rd32(t13 + 0x130u), t13, 2, t12, 0x42u);
        t16 = g->ecx;
        t17 = g->edx;
        if (rd32(COW_IMG(0x10621a08u)) == 0u)
        {
            eax = t15;
            edx = t17;
        }
        else
        {
            ecx = t16;
            edx = t17;
            ebp = rd32(COW_IMG(0x10621a08u));
L_10175417: ;
            wr32(sp0 - 0xc8u, 0u);
            if ((int32_t)rd32(ebp + 8u) <= 0)
            {
                eax = rd32(ebp + 8u);
            }
            else
            {
                eax = rd32(ebp + 8u);
                ebx = rd32(ebp + 4u) + 0x40u;
                wr32(sp0 - 0x7cu, 0u);
                wr32(sp0 - 0x74u, 0u);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x6cu, 0x3f800000u);
                wr32(sp0 - 0x68u, 0u);
                wr32(sp0 - 0x64u, 0u);
                wr32(sp0 - 0x5cu, 0u);
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x48u, 0u);
                wr32(sp0 - 0x44u, 0x3f800000u);
                edi = ebx + 0x20u;
                loc_c8 = 0u;
L_101754ab: ;
                wr32(sp0 - 0xc0u, 0x3f800000u);
                wr32(sp0 - 0xecu, sp0 - 0x40u);
                wr32(sp0 - 0xbcu, 0u);
                wr32(sp0 - 0xb8u, 0u);
                wr32(sp0 - 0xb4u, 0u);
                wr32(sp0 - 0xb0u, 0u);
                wr32(sp0 - 0xacu, 0x3f800000u);
                wr32(sp0 - 0xa8u, 0u);
                wr32(sp0 - 0xa4u, 0u);
                wr32(sp0 - 0xa0u, 0u);
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0x98u, 0x3f800000u);
                wr32(sp0 - 0x94u, 0u);
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x84u, 0x3f800000u);
                g->esp = sp0 - 0xe8u;
                cow_cdecl(g, COW_IMG(0x10175740u), 1, sp0 - 0x40u);
                t18 = rd32(edi - 8u);
                wr32(sp0 - 0x40u, t18);
                t19 = rd32(edi - 4u);
                wr32(sp0 - 0x2cu, t19);
                wr32(sp0 - 0x18u, rd32(edi));
                wr32(sp0 - 0xf0u, sp0 - 0x40u);
                wr32(sp0 - 0xf4u, sp0 - 0xc0u);
                wr32(sp0 - 0xf8u, sp0 - 0xc0u);
                g->esp = sp0 - 0xecu;
                cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0xc0u, sp0 - 0xc0u, sp0 - 0x40u);
                t20 = rd32(edi - 0x10u);
                wr32(sp0 - 0xc4u, t20);
                wr32(sp0 - 0xfcu, sp0 - 0x80u);
                wr32(sp0 - 0x100u, sp0 - 0xc0u);
                wr32(sp0 - 0x104u, sp0 - 0xc0u);
                d21 = (double)(float)fr(g, cos(cow_bits2f(t20)));
                wrf32(sp0 - 0x80u, (float)d21);
                d22 = fr(g, sin(cow_bits2f(t20)));
                wrf32(sp0 - 0x78u, (float)(double)(float)-d22);
                wrf32(sp0 - 0x60u, (float)(double)(float)d22);
                d23 = (double)(float)fr(g, cos(cow_bits2f(t20)));
                wrf32(sp0 - 0x58u, (float)d23);
                g->eax = sp0 - 0xc0u;
                g->esp = sp0 - 0xf8u;
                t24 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0xc0u, sp0 - 0xc0u, sp0 - 0x80u);
                wr32(sp0 - 0x108u, ebx);
                wr32(sp0 - 0x10cu, sp0 - 0xc0u);
                wr32(sp0 - 0x110u, sp0 - 0xc0u);
                g->esp = sp0 - 0x104u;
                cow_cdecl(g, COW_IMG(0x10175780u), 3, sp0 - 0xc0u, sp0 - 0xc0u, ebx);
                t25 = rd32(COW_IMG(0x1045666cu));
                wr32(COW_IMG(0x10621a64u), 0x80804000u);
                wr32(COW_IMG(0x10621a54u), 0x80804000u);
                wr32(COW_IMG(0x10621a44u), 0x80804000u);
                wr32(COW_IMG(0x10621a34u), 0x80804000u);
                wr32(COW_IMG(0x10621a24u), 0x80804000u);
                wr32(COW_IMG(0x10621ab4u), 0x80804000u);
                wr32(COW_IMG(0x10621aa4u), 0x80804000u);
                wr32(COW_IMG(0x10621a94u), 0x80804000u);
                wr32(COW_IMG(0x10621a84u), 0x80804000u);
                wr32(COW_IMG(0x10621a74u), 0x80804000u);
                wr32(COW_IMG(0x10621b34u), 0x80804000u);
                wr32(COW_IMG(0x10621b24u), 0x80804000u);
                wr32(COW_IMG(0x10621b14u), 0x80804000u);
                wr32(COW_IMG(0x10621b04u), 0x80804000u);
                wr32(COW_IMG(0x10621af4u), 0x80804000u);
                wr32(COW_IMG(0x10621ae4u), 0x80804000u);
                wr32(COW_IMG(0x10621ad4u), 0x80804000u);
                wr32(COW_IMG(0x10621ac4u), 0x80804000u);
                wr32(sp0 - 0xecu, sp0 - 0xc0u);
                wr32(sp0 - 0xf0u, 0x100u);
                t26 = rd32(t25 + 0xcu);
                wr32(sp0 - 0xf4u, t26);
                g->edx = sp0 - 0xc0u;
                g->esp = sp0 - 0xe8u;
                cow_thiscall(g, rd32(rd32(rd32(t25 + 0xcu)) + 0x94u), rd32(rd32(t25 + 0xcu)), 3, t26, 0x100u, sp0 - 0xc0u);
                t27 = g->edx;
                wr32(sp0 - 0xecu, 0x10u);
                wr32(sp0 - 0xf0u, COW_IMG(0x10621a18u));
                wr32(sp0 - 0xf4u, 4u);
                wr32(sp0 - 0xf8u, 3u);
                g->ebx = ebx;
                g->edx = t27;
                cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 3u, 4u, COW_IMG(0x10621a18u), 0x10u);
                t28 = g->edx;
                wr32(sp0 - 0xecu, 0x10u);
                wr32(sp0 - 0xf0u, COW_IMG(0x10621a68u));
                wr32(sp0 - 0xf4u, 4u);
                wr32(sp0 - 0xf8u, 3u);
                g->ebx = ebx;
                g->edx = t28;
                cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 3u, 4u, COW_IMG(0x10621a68u), 0x10u);
                t29 = g->edx;
                wr32(sp0 - 0xecu, 0x10u);
                wr32(sp0 - 0xf0u, COW_IMG(0x10621ab8u));
                wr32(sp0 - 0xf4u, 4u);
                wr32(sp0 - 0xf8u, 2u);
                g->ebx = ebx;
                g->edx = t29;
                cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 4u, COW_IMG(0x10621ab8u), 0x10u);
                t30 = g->edx;
                t31 = rd32(sp0 - 0xc8u) + 1u;
                wr32(sp0 - 0xc8u, t31);
                if ((int32_t)(rd32(sp0 - 0xc8u) + 1u) < (int32_t)rd32(ebp + 8u))
                {
                    eax = t31;
                    ecx = rd32(ebp + 8u);
                    ebx = ebx + 0x40u;
                    edi = edi + 0x40u;
                    loc_c8 = t31;
                    goto L_101754ab;
                }
                eax = t31;
                ecx = rd32(ebp + 8u);
                edx = t30;
            }
            if (rd32(ebp) != 0u)
            {
                ebp = rd32(ebp);
                goto L_10175417;
            }
        }
        if (rd32(COW_IMG(0x10621a08u)) == 0u) goto L_1017572b;
        edi = rd32(COW_IMG(0x10621a08u));
L_101756be: ;
        if ((int32_t)rd32(edi + 0x10u) <= 0)
        {
            eax = rd32(edi + 0xcu);
        }
        else
        {
            eax = rd32(edi + 0xcu);
            esi = rd32(edi + 4u) + 0x40u;
            ebx = eax + 0xe0u;
            ebp = 0u;
L_101756d6: ;
            if (rd8(ebx) != 0u)
            {
                wr32(sp0 - 0xecu, 0x80808080u);
                wr32(sp0 - 0xd8u, rd32(esi));
                wr32(sp0 - 0xf0u, 0x80808000u);
                t32 = rd32(esi + 4u);
                wr32(sp0 - 0xd4u, t32);
                wr32(sp0 - 0xf4u, 0x3f800000u);
                wr32(sp0 - 0xf8u, ebx);
                wr32(sp0 - 0xfcu, sp0 - 0xd8u);
                t33 = rd32(esi + 8u);
                wr32(sp0 - 0xd0u, t33);
                wr32(sp0 - 0xccu, 0x3f800000u);
                g->ebx = ebx;
                g->edx = t33;
                g->esp = sp0 - 0xe8u;
                cow_cdecl(g, COW_IMG(0x10086210u), 5, sp0 - 0xd8u, ebx, 0x3f800000u, 0x80808000u, 0x80808080u);
                t34 = g->edx;
                edx = t34;
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(edi + 0x10u))
            {
                ebx = ebx + 0xf4u;
                ebp = ebp + 1u;
                esi = esi + 0x40u;
                goto L_101756d6;
            }
            eax = rd32(edi + 0x10u);
        }
        if (rd32(edi) != 0u)
        {
            edi = rd32(edi);
            goto L_101756be;
        }
    }
L_1017572b: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10174ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10174ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
